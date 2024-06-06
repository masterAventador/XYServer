//
// Created by Aventador on 2024/6/6.
//

#ifndef XYSERVER_LISTENER_H
#define XYSERVER_LISTENER_H

#include <boost/beast.hpp>

namespace beast = boost::beast;
namespace http = beast::http;
namespace net = boost::asio;
using tcp = net::ip::tcp;

class listener: public std::enable_shared_from_this<listener>{
    net::io_context& ioc_;
    tcp::acceptor acceptor_;

public:
    listener(net::io_context& ioc, const tcp::endpoint& endpoint);

    void run();

private:
    void do_accept();
    void on_accept(beast::error_code ec,tcp::socket socket);
};


#endif //XYSERVER_LISTENER_H
