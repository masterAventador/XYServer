//
// Created by Aventador on 2024/7/16.
//

#ifndef XYSERVER_B_LOGIN_H
#define XYSERVER_B_LOGIN_H

#include <iostream>
#include "../boost_aliases.h"

class b_login {
public:
    static std::shared_ptr<PHM::LoginResp> response(PHM::Login& req,PHM::code c,std::string& what);
};


#endif //XYSERVER_B_LOGIN_H
