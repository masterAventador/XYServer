#include <iostream>
#include "http/listener.h"
#include <thread>

#include "http/DB/db.h"

int main() {

    db::create_database("user_list");

    /************************************/
    const unsigned port = 8080;
    const int threads = 5;

    // the io_context is required for all I/O
    net::io_context ioc{threads};
    tcp::endpoint endpoint{tcp::v4(), port};

    // create and launch a listening port
    std::make_shared<listener>(ioc, endpoint)->run();

    // Run the I/O service on the requested number of threads
    std::vector<std::thread> v;
    v.reserve(threads - 1);
    for (auto i = threads - 1; i > 0; --i)
        v.emplace_back(
                [&ioc] {
                    ioc.run();
                }
        );

    ioc.run();

    return EXIT_SUCCESS;
}
