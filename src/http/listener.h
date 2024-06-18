//
// Created by Aventador on 2024/6/6.
//

#ifndef XYSERVER_LISTENER_H
#define XYSERVER_LISTENER_H

#include "boost_aliases.h"

class listener : public std::enable_shared_from_this<listener> {
    net::io_context& ioc_;
    tcp::acceptor acc_;

public:
    listener(net::io_context& ioc,const tcp::endpoint& ep);

    void run();
};

#endif //XYSERVER_LISTENER_H
