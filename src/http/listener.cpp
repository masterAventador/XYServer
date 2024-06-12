//
// Created by Aventador on 2024/6/6.
//

#include "listener.h"
#include <boost/asio/strand.hpp>
#include <iostream>

using std::cout;
using std::endl;

beast::string_view mime_type(beast::string_view path) {
    using beast::iequals;

    auto const ext = [&path] {
        auto const pos = path.rfind(".");
        if (pos == beast::string_view::npos) {
            return beast::string_view{};
        }
        return path.substr(pos);
    }();

    if (iequals(ext, ".htm")) return "text/html";
    if (iequals(ext, ".html")) return "text/html";
    if (iequals(ext, ".php")) return "text/html";
    if (iequals(ext, ".css")) return "text/css";
    if (iequals(ext, ".txt")) return "text/plain";
    if (iequals(ext, ".js")) return "application/javascript";
    if (iequals(ext, ".json")) return "application/json";
    if (iequals(ext, ".xml")) return "application/xml";
    if (iequals(ext, ".swf")) return "application/x-shockwave-flash";
    if (iequals(ext, ".flv")) return "video/x-flv";
    if (iequals(ext, ".png")) return "image/png";
    if (iequals(ext, ".jpe")) return "image/jpeg";
    if (iequals(ext, ".jpeg")) return "image/jpeg";
    if (iequals(ext, ".jpg")) return "image/jpeg";
    if (iequals(ext, ".gif")) return "image/gif";
    if (iequals(ext, ".bmp")) return "image/bmp";
    if (iequals(ext, ".ico")) return "image/vnd.microsoft.icon";
    if (iequals(ext, ".tiff")) return "image/tiff";
    if (iequals(ext, ".tif")) return "image/tiff";
    if (iequals(ext, ".svg")) return "image/svg+xml";
    if (iequals(ext, ".svgz")) return "image/svg+xml";
    return "application/text";
}

std::string path_cat(beast::string_view base, beast::string_view path) {
    if (base.empty()) {
        return std::string(path);
    }

    std::string result(base);
#ifdef BOOST_MSVC
    char constexpr path_separator = '\\';
    if (result.back() == path_separator) {
        result.resize(result.size() - 1);
    }
    result.append(path.data(),path.size());
    for (auto& c : result)
        if (c == '/')
            c = path_separator
#else
    char constexpr path_separator = '/';
    if (result.back() == path_separator) {
        result.resize(result.size() - 1);
    }
    result.append(path.data(), path.size());
#endif
    return result;
}

template<class Body, class Allocator>
http::message_generator
handle_request(http::request<Body, http::basic_fields<Allocator>> &&request) {

    // Return a bad request response
    auto const bad_request = [&request](beast::string_view why) {
        http::response<http::string_body> res{http::status::bad_request, request.version()};
        res.set(http::field::server, BOOST_BEAST_VERSION_STRING);
        res.set(http::field::content_type, "text/html");
        res.keep_alive(request.keep_alive());
        res.body() = std::string(why);
        res.prepare_payload();
        return res;
    };

    cout << "receive a request!!" << endl;

    // Make sure we can handle the method
    if (request.method() != http::verb::get &&
            request.method() != http::verb::post)
        return bad_request("Unknown HTTP-method");

//    http::response<http::string_body> res{http::status::ok, request.version()};
//    res.set(http::field::server, BOOST_BEAST_VERSION_STRING);
//    res.set(http::field::content_type, "application/json");
//    res.keep_alive(request.keep_alive());
//    res.body() = R"({"token":"Hello啊，树哥~~~"})";
//    res.prepare_payload();
//    return res;



}

// Report a failure
void
fail(beast::error_code ec, const char *what) {
    std::cerr << what << ":" << ec.message() << std::endl;
}

class session : public std::enable_shared_from_this<session> {
    beast::tcp_stream stream_;
    beast::flat_buffer buffer_;
    http::request<http::buffer_body> req_;

public:
    // Take ownership of the stream
    explicit session(tcp::socket &&socket) : stream_(std::move(socket)) {

    }

    // Start the asynchronous operation
    void
    run() {
        // We need to be executing within a strand to perform async operations
        // on the I/O objects in this session. Although not strictly necessary
        // for single-threaded contexts, this example code is written to be
        // thread-safe by default.
        net::dispatch(stream_.get_executor(),
                      beast::bind_front_handler(
                              &session::do_read,
                              shared_from_this()));
    }

    void
    do_read() {
        // Make the request empty before reading,
        // otherwise the operation behavior is undefined.
        req_ = {};

        // Set the timeout.
        stream_.expires_after(std::chrono::seconds(30));

        // Read a request
        http::async_read(stream_, buffer_, req_,
                         beast::bind_front_handler(
                                 &session::on_read,
                                 shared_from_this()));
    }

    void
    on_read(beast::error_code ec,
            std::size_t bytes_transferred) {
        boost::ignore_unused(bytes_transferred);

        // This means they closed the connection
        if (ec == http::error::end_of_stream)
            return do_close();

        if (ec)
            return fail(ec, "read");

        // Send the response
        send_response(handle_request(std::move(req_)));
    }

    void
    send_response(http::message_generator &&msg) {
        bool keep_alive = msg.keep_alive();

        // Write the response
        beast::async_write(
                stream_,
                std::move(msg),
                beast::bind_front_handler(
                        &session::on_write, shared_from_this(), keep_alive));
    }

    void
    on_write(bool keep_alive,
             beast::error_code ec,
             std::size_t bytes_transferred) {
        boost::ignore_unused(bytes_transferred);

        if (ec)
            return fail(ec, "write");

        if (!keep_alive) {
            // This means we should close the connection, usually because
            // the response indicated the "Connection: close" semantic.
            return do_close();
        }

        // Read another request
        do_read();
    }

    void
    do_close() {
        // Send a TCP shutdown
        beast::error_code ec;
        stream_.socket().shutdown(tcp::socket::shutdown_send, ec);

        // At this point the connection is closed gracefully
    }
};

//-----------------------------------------------------------------------

// Accepts incoming connections and launches the sessions

listener::listener(net::io_context &ioc,
                   const tcp::endpoint &endpoint)
        : ioc_(ioc), acceptor_(net::make_strand(ioc)) {

    beast::error_code ec;

    // Open the acceptor
    acceptor_.open(endpoint.protocol(), ec);
    if (ec) {
        fail(ec, "open");
        return;
    }

    // Allow address reuse
    acceptor_.set_option(net::socket_base::reuse_address(true), ec);
    if (ec) {
        fail(ec, "set_option");
        return;
    }

    // Bind to the server address
    acceptor_.bind(endpoint, ec);
    if (ec) {
        fail(ec, "bind");
        return;
    }

    // Start listening for connections
    acceptor_.listen(net::socket_base::max_listen_connections, ec);
    if (ec) {
        fail(ec, "listen");
        return;
    }
}

void
listener::run() {
    std::cout << "Start listening..." << std::endl;
    do_accept();
}

void
listener::do_accept() {
    acceptor_.async_accept(
            net::make_strand(ioc_),
            beast::bind_front_handler(
                    &listener::on_accept,
                    shared_from_this()
            )
    );
}

void
listener::on_accept(beast::error_code ec, tcp::socket socket) {
    if (ec) {
        fail(ec, "accept");
        return; // To avoid infinite loop
    } else {
        // Create the session and run it
        std::make_shared<session>(std::move(socket))->run();
    }

    // Accept another connection
    do_accept();
}
