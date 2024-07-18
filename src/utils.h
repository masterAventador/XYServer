//
// Created by Aventador on 2024/7/18.
//

#ifndef XYSERVER_UTILS_H
#define XYSERVER_UTILS_H

#include <iostream>
#include "http/boost_aliases.h"

class utils {
public:
    static std::tm time();
};

inline void reportError(beast::error_code ec, const std::string &step) {
    std::tm time = utils::time();
    std::cerr << std::put_time(&time, "%Y-%m-%d %H:%M:%S") << " >> " + step << ":" << ec.what() << std::endl;
}

inline void reportLog(const std::string_view &what) {
    std::tm time = utils::time();
    std::cout << std::put_time(&time, "%Y-%m-%d %H:%M:%S") << " >> " << what << std::endl;
}

#endif //XYSERVER_UTILS_H
