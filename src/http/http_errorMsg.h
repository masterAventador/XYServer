

#include <iostream>

namespace httpMessage {
    using message = std::string;
    static const message transportDeserialization = "PB Deserialization failed at transport layer";
    static const message businessDeserialization = "PB Deserialization failed at business layer";
    static const message invalidToken = "token verify failed";
}