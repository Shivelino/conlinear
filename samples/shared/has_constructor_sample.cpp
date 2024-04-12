/*********************************************************************
 * @file    has_constructor_sample.cpp
 * @brief
 * @details
 * @author  Shivelino
 * @date    2023.10.20
 * @version 0.2.0
 * @par Copyright(c): Concloud Software Corporation
 * @par todo:
 * @par history:
 *********************************************************************/
#include <iostream>
#include <mutex>
#include <string>

#include "shared/template_util.h"

int main() {
    // 判断是否存在拷贝构造函数
    std::cout << std::boolalpha << has_copy_constructor<std::string>::value << std::endl;  // true
    std::cout << std::boolalpha << has_copy_constructor<std::mutex>::value << std::endl;   // false
    std::cout << "==============================" << std::endl;
    return 0;
}
