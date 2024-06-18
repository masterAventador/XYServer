//
// Created by Aventador on 2024/6/17.
//

#include "session.h"

session::session(tcp::socket &sc) : stream_(std::move(sc)) {

}

void session::run() {
    auto self = shared_from_this();
    net::dispatch(stream_.get_executor(), [self]() {
        self->req_ = {};
        self->stream_.expires_after(std::chrono::seconds(30));
        http::async_read(self->stream_, self->buffer_, self->req_,
                         beast::bind_front_handler(
                                 &session::did_read, self->shared_from_this()));
    });
}

void session::did_read(beast::error_code ec, std::size_t byte_transferred) {
    boost::ignore_unused(byte_transferred);
    if (ec == http::error::end_of_stream) {
        stream_.socket().shutdown(tcp::socket::shutdown_send);
    }
    if (ec) {
        reportError(ec,"session_read");
        return;
    }

    http::message_generator res = makeResponse(http::request<http::string_body>());

    auto self = shared_from_this();
    beast::async_write(stream_,std::move(res),[self](beast::error_code ec,std::size_t byte_transferred){
        if (ec) {
            reportError(ec,"session_write");
            return;
        }
        std::cout << "write response successfully!!" << std::endl;
    });
}


http::message_generator session::makeResponse(http::request<http::string_body>&& req) {

    http::response<http::string_body> res {http::status::ok,req.version()};
    res.set(http::field::server,BOOST_BEAST_VERSION_STRING);
    res.set(http::field::content_type,"text/html");
    res.keep_alive(req.keep_alive());
    res.body() = R"({"token":"hello啊，树哥~~~"})";
    res.prepare_payload();
    return res;
}
