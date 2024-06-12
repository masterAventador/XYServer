#include "responser.h"
#include "business_handler.h"


std::optional<PHM::response>
responser::makeResponse(const beast_buffer &requestBody,
                        std::string &what) {
    PHM::request request;
    if (!request.ParseFromArray(requestBody.data, static_cast<int>(requestBody.size))) {
        what = "Protobuf deserialization failed at the transport layer.";
        return std::nullopt;
    }

    std::shared_ptr<protobuf_message> req_payload_obj = getRequestPayloadObj(request.cmd());

    if (!req_payload_obj || !request.payload().UnpackTo(req_payload_obj.get())) {
        what = "Protobuf deserialization failed at the business layer.";
        return std::nullopt;
    }

    PHM::response response;
    response.set_code(PHM::code::success);
    response.set_msg("Success.");

    std::shared_ptr<protobuf_message> resp_payload_obj = makeResponsePayloadObj(request.cmd(),req_payload_obj);
    if (resp_payload_obj) {
        response.mutable_payload()->PackFrom(*resp_payload_obj);
    }
    return response;
}

std::shared_ptr<protobuf_message>
responser::getRequestPayloadObj(PHM::cmd c) {
    std::shared_ptr<protobuf_message> p;
    using namespace std;
    using namespace PHM;
    switch (c) {
        case register_:
            return make_shared<Register>();
        case login:
            return make_shared<Login>();
        default:
            return nullptr;
    }
}

std::shared_ptr<protobuf_message>
responser::makeResponsePayloadObj(PHM::cmd c, std::shared_ptr<protobuf_message>& req) {
    using namespace std;
    using namespace PHM;
    switch (c) {
        case register_:
            return business_handler::handleRegister(dynamic_pointer_cast<PHM::Register>(req));
        default:
            return nullptr;
    }
}


