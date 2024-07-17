//
// Created by Aventador on 2024/7/16.
//

#ifndef XYSERVER_B_REGISTER_H
#define XYSERVER_B_REGISTER_H

#include <iostream>
#include "../boost_aliases.h"

class b_register {
public:
    static std::shared_ptr<PHM::RegisterResp> response(PHM::Register& req,PHM::code& c,std::string& what);
};


#endif //XYSERVER_B_REGISTER_H
