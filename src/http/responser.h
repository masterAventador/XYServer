//
// Created by Aventador on 2024/6/10.
//

#ifndef XYSERVER_RESPONSER_H
#define XYSERVER_RESPONSER_H


#include <boost/beast.hpp>
#include <google/protobuf/message_lite.h>
#include "PBFiles/HttpTransport.pb.h"
#include "PBFiles/Login.pb.h"

using beast_buffer = boost::beast::http::buffer_body::value_type;
using protobuf_message = google::protobuf::Message;

namespace business_responser {
    // 注册
    std::shared_ptr<PHM::RegisterResp> handleRegister(std::shared_ptr<PHM::Register>&& p) {
        std::shared_ptr<PHM::RegisterResp> resp = std::make_shared<PHM::RegisterResp>();
        resp->set_token(p->account() + p->pwd());
        return resp;
    }
}

class responser {
public:
    static std::optional<PHM::response>
    makeResponse(const beast_buffer& requestBody,
                 boost::beast::http::status &ss,
                 std::string &what);

private:
    static std::shared_ptr<protobuf_message>
    getRequestPayloadObj(PHM::cmd c);

    static std::shared_ptr<protobuf_message>
    makeResponsePayloadObj(PHM::cmd c, std::shared_ptr<protobuf_message>& req);
};


#endif //XYSERVER_RESPONSER_H
