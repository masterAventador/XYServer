//
// Created by Aventador on 2024/6/19.
//

#ifndef XYSERVER_PAYLOADER_H
#define XYSERVER_PAYLOADER_H

#include "boost_aliases.h"

class payloader {
public:
    static std::shared_ptr<g_message> business_ptr(PHM::request& req);
    static std::shared_ptr<g_message> generate(PHM::cmd c, std::shared_ptr<g_message>& payload);
};


#endif //XYSERVER_PAYLOADER_H
