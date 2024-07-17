//
// Created by Aventador on 2024/6/19.
//

#include "payloader.h"
#include "http_errorMsg.h"
#include "businessHandler/b_login.h"
#include "businessHandler/b_register.h"

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

std::shared_ptr<g_message> business_ptr(PHM::request &req) {

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
payloader::generate(PHM::request& req,PHM::code& c,std::string& errMsg) {
    std::shared_ptr<g_message> req_payload_cls = business_ptr(req);
    if (req_payload_cls == nullptr) {
        c = PHM::failed;
        errMsg = httpMessage::businessDeserialization;
        return nullptr;
    }
    req.mutable_payload()->UnpackTo(req_payload_cls.get());
    switch (req.cmd()) {
        case PHM::register_:
            return b_register::response(*dynamic_pointer_cast<PHM::Register>(req_payload_cls),c,errMsg);
        case PHM::login:
            return b_login::response(*dynamic_pointer_cast<PHM::Login>(req_payload_cls),c,errMsg);
        default:
            break;
    }

}

