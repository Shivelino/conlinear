/*********************************************************************
 * @file    time_util_sample.cpp
 * @brief   samples for time_util.h
 * @details
 * @author  Shivelino
 * @date    2023.10.20
 * @version 0.2.0
 * @par Copyright(c): Concloud Software Corporation
 * @par todo:
 * @par history:
 *********************************************************************/
#include <iostream>

#include "shared/time_util.h"

int main() {
    // 获取时间戳
    std::cout << get_time_stamp_milli() << std::endl;
    std::cout << get_time_stamp_micro() << std::endl;
    std::cout << get_procedure_time_milli() << std::endl;
    // 获取当前时间
    int y, m, d, h, mi, s;
    get_now_time(y, m, d, h, mi, s);
    std::cout << y << "." << m << "." << d << " " << h << ":" << mi << ":" << s << std::endl;
    return 0;
}
