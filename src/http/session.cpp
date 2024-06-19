//
// Created by Aventador on 2024/6/17.
//

#include "session.h"

session::session(tcp::socket &sc) : stream_(std::move(sc)) {

}

void session::run() {
    auto self = shared_from_this();
    net::dispatch(stream_.get_executor(), beast::bind_front_handler(&session::do_read,shared_from_this()));
}

void session::do_read() {
    req_ = {};
    stream_.expires_after(std::chrono::seconds(30));

    auto self = shared_from_this();
    http::async_read(stream_,buffer_,req_,beast::bind_front_handler(&session::on_read,shared_from_this()));
}

void session::on_read(beast::error_code ec, std::size_t byte_transferred) {
    boost::ignore_unused(byte_transferred);
    if (ec == http::error::end_of_stream) {
        return close();
    }
    if (ec) {
        reportError(ec,"session_read");
        return;
    }

    do_write();
}

void session::do_write() {
    http::message_generator res = makeResponse(req_);
    beast::async_write(stream_,std::move(res),beast::bind_front_handler(&session::did_write,shared_from_this(),req_.keep_alive()));
}

void session::did_write(bool keep_alive,beast::error_code ec, std::size_t byte_transferred) {
    if (ec) {
        reportError(ec,"session_write");
        return;
    }

    std::cout << "write response successfully!!" << std::endl;

    if (!keep_alive) {
        return close();
    }

    do_read();
}

void session::close() {
    stream_.socket().shutdown(boost::asio::socket_base::shutdown_send);
}

http::message_generator session::makeResponse(const http::request<http::string_body>& req) {

    if (req[http::field::content_type] != "application/x-protobuf") {
        http::response<http::string_body> res{http::status::ok,req.version()};
        res.set(http::field::server,BOOST_BEAST_VERSION_STRING);
        res.set(http::field::content_type,"text/json");
        res.keep_alive(req.keep_alive());
        res.body() = R"({"token":"hello啊，树哥~~~"})";
        res.prepare_payload();
        return res;
    }

    // http response generator
    std::function<http::response<http::string_body> (PHM::response)> httpResponse = [&req](PHM::response pb_res){
        http::response<http::string_body> res{http::status::ok,req.version()};
        res.set(http::field::server,BOOST_BEAST_VERSION_STRING);
        res.set(http::field::content_type,"application/x-protobuf");
        res.keep_alive(req.keep_alive());
        res.body() = pb_res.SerializeAsString();
        return res;
    };

    std::function<PHM::response (std::string_view)> serialzation_failed_response = [](std::string_view what){
        PHM::response res;
        res.set_code(PHM::failed);
        res.set_msg(what);
        return res;
    };

    PHM::request pb_req;
    if (!pb_req.ParseFromString(req.body())) {
        std::string what = "PB serialization failed at the transport layer";
        reportError(beast::error_code{},what);
        return httpResponse(serialzation_failed_response(what));
    }


}
