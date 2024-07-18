//
// Created by Aventador on 2024/6/18.
//

#ifndef XYSERVER_BOOST_ALIASES_H
#define XYSERVER_BOOST_ALIASES_H

#include <boost/beast.hpp>
#include <boost/asio.hpp>
#include "PBFiles/Login.pb.h"
#include "PBFiles/HttpTransport.pb.h"
#include <iostream>

namespace beast = boost::beast;
namespace net = boost::asio;
namespace http = beast::http;
using tcp = net::ip::tcp;

using g_message = google::protobuf::Message;

#endif //XYSERVER_BOOST_ALIASES_H
