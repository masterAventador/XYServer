//
// Created by Aventador on 2024/6/19.
//

#include "payloader.h"
#include "http_errorMsg.h"

using namespace std;


std::shared_ptr<PHM::RegisterResp> register_business(PHM::Register &req, PHM::code &code, std::string &what) {
    auto res = make_shared<PHM::RegisterResp>();
    res->set_token(req.account() + req.pwd() + "wswswsws");
    return res;
}

std::shared_ptr<PHM::LoginResp> login_business(PHM::Login &req, PHM::code &code, std::string &what) {
    if (req.account() != "amigo" || req.pwd_md5() != "amigo123") {
        code = PHM::failed;
        what = httpMessage::invalidToken;
        return nullptr;
    }
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

std::shared_ptr<g_message>
payloader::generate(PHM::cmd c, std::shared_ptr<g_message> &payload, PHM::code &code, std::string &errMsg) {
    switch (c) {
        case PHM::register_:
            return register_business(*dynamic_pointer_cast<PHM::Register>(payload), code, errMsg);
        case PHM::login:
            return login_business(*dynamic_pointer_cast<PHM::Login>(payload), code, errMsg);
        default:
            return nullptr;
    }
}

