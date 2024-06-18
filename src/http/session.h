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
    void did_read(beast::error_code ec,std::size_t byte_transferred);
    void close();
    static http::message_generator makeResponse(http::request<http::string_body>& req);

};


#endif //XYSERVER_SESSION_H
