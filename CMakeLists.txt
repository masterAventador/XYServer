cmake_minimum_required(VERSION 3.28)
project(XYServer)

set(CMAKE_CXX_STANDARD 20)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

find_package(Boost REQUIRED)
find_package(protobuf REQUIRED)

add_executable(XYServer src/main.cpp
        src/http/listener.cpp
        src/http/listener.h
        src/http/PBFiles/HttpTransport.pb.cc
        src/http/PBFiles/HttpTransport.pb.h
        src/http/PBFiles/Login.pb.cc
        src/http/PBFiles/Login.pb.h
        src/http/responser.cpp
        src/http/responser.h
)

target_link_libraries(${PROJECT_NAME} boost::boost protobuf::protobuf)
