//
// Created by Aventador on 2024/7/18.
//

#include "utils.h"
#include <iostream>

std::tm utils::time() {
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::time_t now_time = std::chrono::system_clock::to_time_t(now);
    std::tm utc_time{};
    localtime_r(&now_time, &utc_time);
    return utc_time;
}
