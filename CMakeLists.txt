cmake_minimum_required(VERSION 3.28)
project(XYServer)

set(CMAKE_CXX_STANDARD 20)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/local_bin CACHE PATH
        "Output directory for executables,the release_build.sh will change it to 'linux_bin',so we cache this variable
          to make sure it works!")

find_package(Boost REQUIRED)
find_package(protobuf REQUIRED)
find_package(libpqxx REQUIRED)

#add_subdirectory(ThirdLibs/MMKV/POSIX/src mmkv)

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
        src/http/BusinessHandler/b_register.cpp
        src/http/BusinessHandler/b_register.h
        src/http/BusinessHandler/b_login.cpp
        src/http/BusinessHandler/b_login.h
        src/utils.cpp
        src/utils.h
        src/http/DB/db.cpp
        src/http/DB/db.h
)

target_link_libraries(${PROJECT_NAME}
        # conan packages
        boost::boost
        protobuf::protobuf
        libpqxx::pqxx

        #custom packages
#        mmkv
)
