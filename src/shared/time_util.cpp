/*********************************************************************
 * @file    time_util.cpp
 * @brief
 * @details
 * @author  Shivelino
 * @date    2023.10.2
 * @version 0.2.0
 * @par Copyright(c): Concloud Software Corporation
 * @par todo:
 * @par history:
 *********************************************************************/
#include "shared/time_util.h"

#include <chrono>
#include <iomanip>
#include <sstream>

ll get_procedure_time_milli() {
    return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch()).count();
}

ll get_procedure_time_micro() {
    return std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now().time_since_epoch()).count();
}

ll get_time_stamp_milli() {
    return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
}

ll get_time_stamp_micro() {
    return std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
}

void get_now_time(int& year, int& month, int& day, int& hour, int& minute, int& second) {
    auto now = std::chrono::system_clock::now();  // 获取当前系统时间
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
    struct std::tm* timeInfo = std::localtime(&currentTime);
    year = timeInfo->tm_year + 1900;
    month = timeInfo->tm_mon + 1;
    day = timeInfo->tm_mday;
    hour = timeInfo->tm_hour;
    minute = timeInfo->tm_min;
    second = timeInfo->tm_sec;
}

std::time_t time_stamp2time_t(ll time_stamp_micro) {
    auto epoch = std::chrono::time_point<std::chrono::system_clock>(std::chrono::milliseconds(0));  // 系统起始时间
    auto time_point = epoch + std::chrono::microseconds(time_stamp_micro);
    return std::chrono::system_clock::to_time_t(time_point);
}

std::string get_format_time_string(ll time_stamp_micro) {
    std::time_t time_stamp_time_t = time_stamp2time_t(time_stamp_micro);
    std::tm local_time = *std::localtime(&time_stamp_time_t);
    ll micro_ms = time_stamp_micro % 1000;
    ll milli_ms = (time_stamp_micro / 1000) % 1000;
    std::stringstream ss;
    ss << std::put_time(&local_time, "%Y-%m-%d %H:%M:%S") << ":" << milli_ms << ":" << micro_ms;
    return ss.str();
}

std::string get_format_time_string_now() {
    ll time_stamp_micro = get_time_stamp_micro();
    return get_format_time_string(time_stamp_micro);
}
