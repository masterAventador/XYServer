//
// Created by Aventador on 2024/6/6.
//

#include "listener.h"
#include <iostream>
#include <boost/asio.hpp>
#include "session.h"


listener::listener(net::io_context &ioc, const tcp::endpoint &ep) : ioc_(ioc), acc_(net::make_strand(ioc)) {
    beast::error_code ec;

    acc_.open(ep.protocol(), ec);
    if (ec) {
        reportError(ec, "acc_open");
        return;
    }

    acc_.set_option(net::socket_base::reuse_address(true), ec);
    if (ec) {
        reportError(ec, "acc_set_option");
        return;
    }

    acc_.bind(ep, ec);
    if (ec) {
        reportError(ec, "acc_bind");
        return;
    }

    acc_.listen(net::socket_base::max_listen_connections, ec);
    if (ec) {
        reportError(ec, "acc_listen");
        return;
    }
}

void listener::run() {

    std::cout << "Start listening....!!!!" << std::endl;

    auto self = shared_from_this();
    acc_.async_accept(net::make_strand(ioc_),
                      [self](beast::error_code ec, tcp::socket sc) {
                          if (ec) {
                              reportError(ec, "acc_accept");
                              return;
                          }
                          std::make_shared<session>(sc)->run();
                          // waiting another connection
                          self->run();
                      });
}
