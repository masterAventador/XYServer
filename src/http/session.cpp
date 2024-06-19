//
// Created by Aventador on 2024/6/17.
//

#include "session.h"
#include "payloader.h"

session::session(tcp::socket &sc) : stream_(std::move(sc)) {

}

void session::run() {
    auto self = shared_from_this();
    net::dispatch(stream_.get_executor(), beast::bind_front_handler(&session::do_read, shared_from_this()));
}

void session::do_read() {
    req_ = {};
    stream_.expires_after(std::chrono::seconds(30));

    auto self = shared_from_this();
    http::async_read(stream_, buffer_, req_, beast::bind_front_handler(&session::on_read, shared_from_this()));
}

void session::on_read(beast::error_code ec, std::size_t byte_transferred) {
    boost::ignore_unused(byte_transferred);
    if (ec == http::error::end_of_stream) {
        return close();
    }
    if (ec) {
        reportError(ec, "session_read");
        return;
    }

    do_write();
}

void session::do_write() {
    http::message_generator res = make_response(req_);
    beast::async_write(stream_, std::move(res),
                       beast::bind_front_handler(&session::did_write, shared_from_this(), req_.keep_alive()));
}

void session::did_write(bool keep_alive, beast::error_code ec, std::size_t byte_transferred) {
    if (ec) {
        reportError(ec, "session_write");
        return;
    }

    std::cout << "write response successfully!!" << std::endl;

    return close();

    // TODO: I know the code under this line will never be executed
    if (keep_alive) {
        do_read();
    }
}

void session::close() {
    stream_.socket().shutdown(boost::asio::socket_base::shutdown_both);
}

http::message_generator session::make_response(const http::request<http::string_body> &req) {

    if (req[http::field::content_type] != "application/x-protobuf") {
        http::response<http::string_body> res{http::status::ok, req.version()};
        res.set(http::field::server, BOOST_BEAST_VERSION_STRING);
        res.set(http::field::content_type, "text/json");
        res.keep_alive(req.keep_alive());
        res.body() = R"({"token":"hello啊，树哥~~~"})";
        res.prepare_payload();
        return res;
    }

    auto httpResponse = [&req](google::protobuf::Message *payload_msg = nullptr,
                               PHM::code c = PHM::success,
                               std::string_view what = "success!") {
        http::response<http::string_body> res{http::status::ok, req.version()};
        res.set(http::field::server, BOOST_BEAST_VERSION_STRING);
        res.set(http::field::content_type, "application/x-protobuf");
        res.keep_alive(req.keep_alive());

        PHM::response pb_response;
        pb_response.set_code(c);
        pb_response.set_msg(what);
        if (payload_msg) {
            pb_response.mutable_payload()->PackFrom(*payload_msg);
        }
        res.body() = pb_response.SerializeAsString();
        return res;
    };

    PHM::request pb_req;
    std::string errMsg;
    if (!pb_req.ParseFromString(req.body())) {
        errMsg = "PB serialization failed at the transport layer";
    }

    std::shared_ptr<g_message> req_payload_cls = payloader::business_ptr(pb_req);
    if (!pb_req.payload().UnpackTo(req_payload_cls.get())) {
        errMsg = "PB serialization failed at the business layer";
    }

    std::shared_ptr<g_message> resp_payload_cls = payloader::generate(pb_req.cmd(),req_payload_cls);
    if (!resp_payload_cls) {
        errMsg = "PB payload generate failed";
    }

    if (!errMsg.empty()) {
        reportError(beast::error_code{},errMsg);
        return httpResponse(nullptr,PHM::failed,errMsg);
    }

    return httpResponse(resp_payload_cls.get());
}





















