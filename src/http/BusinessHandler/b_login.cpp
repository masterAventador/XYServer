//
// Created by Aventador on 2024/7/16.
//

#include "b_login.h"

using namespace std;

std::shared_ptr<PHM::LoginResp> b_login::response(PHM::Login &req, PHM::code c, std::string &what) {
    shared_ptr<PHM::LoginResp> resp = make_shared<PHM::LoginResp>();
    resp->set_token(req.account() + req.pwd_md5());
    return resp;
}
