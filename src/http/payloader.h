//
// Created by Aventador on 2024/6/19.
//

#ifndef XYSERVER_PAYLOADER_H
#define XYSERVER_PAYLOADER_H

#include "boost_aliases.h"

class payloader {
public:
    static std::shared_ptr<g_message> generate(PHM::request& req,PHM::code& c,std::string& errMsg);
};


#endif //XYSERVER_PAYLOADER_H
