//
// Created by Aventador on 2024/6/19.
//

#include "payloader.h"

using namespace std;


std::shared_ptr<PHM::RegisterResp> register_business(PHM::Register& req) {
    auto res = make_shared<PHM::RegisterResp>();
    res->set_token(req.account() + req.pwd());
    return res;
}

std::shared_ptr<PHM::LoginResp> login_business(PHM::Login& req) {
    auto res = make_shared<PHM::LoginResp>();
    res->set_token(req.account() + req.pwd_md5());
    return res;
}

std::shared_ptr<g_message> payloader::business_ptr(PHM::request &req) {

    switch (req.cmd()) {
        case PHM::register_:
            return make_shared<PHM::Register>();

        case PHM::login:
            return make_shared<PHM::Login>();

        default:
            return nullptr;
    }
}

std::shared_ptr<g_message> payloader::generate(PHM::cmd c, std::shared_ptr<g_message>& payload) {
    switch (c) {
        case PHM::register_:
            return register_business(*dynamic_pointer_cast<PHM::Register>(payload));
        case PHM::login:
            return login_business(*dynamic_pointer_cast<PHM::Login>(payload));
        default:
            return nullptr;
    }
}

