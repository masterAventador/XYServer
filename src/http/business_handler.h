//
// Created by Aventador on 2024/6/12.
//

#ifndef XYSERVER_BUSINESS_HANDLER_H
#define XYSERVER_BUSINESS_HANDLER_H

#include "listener.h"
#include "PBFiles/Login.pb.h"
#include "PBFiles/HttpTransport.pb.h"

class business_handler {
public:
    // 注册
    static std::shared_ptr<PHM::RegisterResp> handleRegister(std::shared_ptr<PHM::Register>&& p);
};


#endif //XYSERVER_BUSINESS_HANDLER_H
