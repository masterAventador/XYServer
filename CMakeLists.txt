cmake_minimum_required(VERSION 3.28)
project(XYServer)

set(CMAKE_CXX_STANDARD 20)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/local_bin CACHE PATH
        "Output directory for executables,the release_build.sh will change it to 'linux_bin',so we cache this variable
          to make sure it works!")


add_subdirectory(ThirdLibs/MMKV/POSIX/src mmkv)

find_package(Boost REQUIRED)
find_package(protobuf REQUIRED)


add_executable(XYServer src/main.cpp
        src/http/listener.cpp
        src/http/listener.h
        src/http/PBFiles/HttpTransport.pb.cc
        src/http/PBFiles/HttpTransport.pb.h
        src/http/PBFiles/Login.pb.cc
        src/http/PBFiles/Login.pb.h
        src/http/session.cpp
        src/http/session.h
        src/http/boost_aliases.h
        src/http/payloader.cpp
        src/http/payloader.h
        src/http/http_errorMsg.h
)

target_link_libraries(${PROJECT_NAME}
        # conan packages
        boost::boost
        protobuf::protobuf

        #custom packages
        mmkv
)
