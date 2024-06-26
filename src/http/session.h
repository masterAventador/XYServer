//
// Created by Aventador on 2024/6/17.
//

#ifndef XYSERVER_SESSION_H
#define XYSERVER_SESSION_H

#include "boost_aliases.h"

class session : public std::enable_shared_from_this<session>{
    boost::beast::tcp_stream stream_;
    http::request<http::string_body> req_;
    boost::beast::flat_buffer buffer_;
public:
    explicit session(tcp::socket& sc);

    void run();

private:
    void do_read();
    void on_read(beast::error_code ec,std::size_t byte_transferred);
    void do_write();
    void did_write(bool keep_alive,beast::error_code ec,std::size_t byte_transferred);
    void close();

private:
    static http::message_generator make_response(const http::request<http::string_body> &req);
};


#endif //XYSERVER_SESSION_H
