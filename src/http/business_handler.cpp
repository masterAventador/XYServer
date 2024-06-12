//
// Created by Aventador on 2024/6/12.
//

#include "business_handler.h"

std::shared_ptr<PHM::RegisterResp> business_handler::handleRegister(std::shared_ptr<PHM::Register> &&p) {
    std::shared_ptr<PHM::RegisterResp> resp = std::make_shared<PHM::RegisterResp>();
    resp->set_token(p->account() + p->pwd());
    return resp;
}
