#include "responser.h"

std::optional<PHM::response>
responser::makeResponse(const beast_buffer &requestBody,
                        boost::beast::http::status &ss,
                        std::string &what) {
    PHM::request request;
    if (!request.ParseFromArray(requestBody.data, static_cast<int>(requestBody.size))) {
        ss = boost::beast::http::status::bad_request;
        what = "Protobuf serialization failed at the transport layer.";
        return std::nullopt;
    }

    std::shared_ptr<protobuf_message> req_payload_obj = getRequestPayloadObj(request.cmd());

    if (!req_payload_obj || !request.payload().UnpackTo(req_payload_obj.get())) {
        ss = boost::beast::http::status::bad_request;
        what = "Protobuf serialization failed at the business layer.";
        return std::nullopt;
    }

    std::shared_ptr<protobuf_message> resp_payload_obj = makeResponsePayloadObj(request.cmd(),req_payload_obj);

    PHM::response response;
    response.set_cmd(request.cmd());
    response.set_code(PHM::code::success);
    response.set_msg("Success.");
    response.mutable_payload()->PackFrom(*resp_payload_obj);
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
            return business_responser::handleRegister(dynamic_pointer_cast<PHM::Register>(req));
        default:
            return nullptr;
    }
}


