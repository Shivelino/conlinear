/*********************************************************************
 * @file    func_example.cpp
 * @brief   samples for string_utils.h
 * @details
 * @author  Shivelino
 * @date    2023.10.20
 * @version 0.2.0
 * @par Copyright(c): Concloud Software Corporation
 * @par todo:
 * @par history:
 *********************************************************************/
#include <iostream>

#include "shared/string_util.h"

int main(int argc, char** argv) {
    // 转大写
    std::cout << string_upper("HelloWorld2023!") << std::endl;
    // 转小写
    std::cout << string_lower("HelloWorld2023!") << std::endl;
    return 0;
}
