/*********************************************************************
 * @file    has_operator_sample.cpp
 * @brief
 * @details
 * @author  Shivelino
 * @date    2023.10.20
 * @version 0.2.0
 * @par Copyright(c): Concloud Software Corporation
 * @par todo:
 * @par history:
 *********************************************************************/
#include <exception>
#include <iostream>
#include <mutex>
#include <string>
#include <vector>

#include "shared/template_util.h"

int main() {
    // 判断两个类型是否存在operator+
    std::cout << std::boolalpha << has_operator_add<std::string, std::string>::value << std::endl;  // true
    std::cout << std::boolalpha << has_operator_add<std::mutex, std::mutex>::value << std::endl;    // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator+=
    std::cout << std::boolalpha << has_operator_add_assign<std::string, std::string>::value << std::endl;  // true
    std::cout << std::boolalpha << has_operator_add_assign<std::mutex, std::mutex>::value << std::endl;    // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator-
    std::cout << std::boolalpha << has_operator_sub<double, double>::value << std::endl;            // true
    std::cout << std::boolalpha << has_operator_sub<std::string, std::string>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator-=
    std::cout << std::boolalpha << has_operator_sub_assign<double, double>::value << std::endl;            // true
    std::cout << std::boolalpha << has_operator_sub_assign<std::string, std::string>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator*
    std::cout << std::boolalpha << has_operator_mul<double, double>::value << std::endl;            // true
    std::cout << std::boolalpha << has_operator_mul<std::string, std::string>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator*=
    std::cout << std::boolalpha << has_operator_mul_assign<double, double>::value << std::endl;            // true
    std::cout << std::boolalpha << has_operator_mul_assign<std::string, std::string>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator/
    std::cout << std::boolalpha << has_operator_div<double, double>::value << std::endl;            // true
    std::cout << std::boolalpha << has_operator_div<std::string, std::string>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator/=
    std::cout << std::boolalpha << has_operator_div_assign<double, double>::value << std::endl;            // true
    std::cout << std::boolalpha << has_operator_div_assign<std::string, std::string>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator%
    std::cout << std::boolalpha << has_operator_mod<int, int>::value << std::endl;                  // true
    std::cout << std::boolalpha << has_operator_mod<std::string, std::string>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator%=
    std::cout << std::boolalpha << has_operator_mod_assign<int, int>::value << std::endl;                  // true
    std::cout << std::boolalpha << has_operator_mod_assign<std::string, std::string>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator=
    std::cout << std::boolalpha << has_operator_assign<std::string, std::string>::value << std::endl;  // true
    std::cout << std::boolalpha << has_operator_assign<std::mutex, std::mutex>::value << std::endl;    // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator==
    std::cout << std::boolalpha << has_operator_equal<std::string, std::string>::value << std::endl;    // true
    std::cout << std::boolalpha << has_operator_equal<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator!=
    std::cout << std::boolalpha << has_operator_not_equal<std::string, std::string>::value << std::endl;    // true
    std::cout << std::boolalpha << has_operator_not_equal<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator<
    std::cout << std::boolalpha << has_operator_less<double, double>::value << std::endl;              // true
    std::cout << std::boolalpha << has_operator_less<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator<=
    std::cout << std::boolalpha << has_operator_less_equal<double, double>::value << std::endl;              // true
    std::cout << std::boolalpha << has_operator_less_equal<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator>
    std::cout << std::boolalpha << has_operator_greater<double, double>::value << std::endl;              // true
    std::cout << std::boolalpha << has_operator_greater<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator>=
    std::cout << std::boolalpha << has_operator_greater_equal<double, double>::value << std::endl;              // true
    std::cout << std::boolalpha << has_operator_greater_equal<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator&
    std::cout << std::boolalpha << has_operator_and<int, int>::value << std::endl;                    // true
    std::cout << std::boolalpha << has_operator_and<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator&=
    std::cout << std::boolalpha << has_operator_and_assign<int, int>::value << std::endl;                    // true
    std::cout << std::boolalpha << has_operator_and_assign<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator|
    std::cout << std::boolalpha << has_operator_or<int, int>::value << std::endl;                    // true
    std::cout << std::boolalpha << has_operator_or<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator|=
    std::cout << std::boolalpha << has_operator_or_assign<int, int>::value << std::endl;                    // true
    std::cout << std::boolalpha << has_operator_or_assign<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator^
    std::cout << std::boolalpha << has_operator_xor<int, int>::value << std::endl;                    // true
    std::cout << std::boolalpha << has_operator_xor<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator^=
    std::cout << std::boolalpha << has_operator_xor_assign<int, int>::value << std::endl;                    // true
    std::cout << std::boolalpha << has_operator_xor_assign<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator<<
    std::cout << std::boolalpha << has_operator_left_shift<int, int>::value << std::endl;                    // true
    std::cout << std::boolalpha << has_operator_left_shift<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator<<=
    std::cout << std::boolalpha << has_operator_left_shift_assign<int, int>::value << std::endl;                    // true
    std::cout << std::boolalpha << has_operator_left_shift_assign<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator>>
    std::cout << std::boolalpha << has_operator_right_shift<int, int>::value << std::endl;                    // true
    std::cout << std::boolalpha << has_operator_right_shift<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator>>=
    std::cout << std::boolalpha << has_operator_right_shift_assign<int, int>::value << std::endl;                    // true
    std::cout << std::boolalpha << has_operator_right_shift_assign<std::mutex, std::exception>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    // 判断两个类型是否存在operator[]
    std::cout << std::boolalpha << has_operator_bracket<std::vector<std::string>, int>::value << std::endl;          // true
    std::cout << std::boolalpha << has_operator_bracket<std::vector<std::string>, std::string>::value << std::endl;  // false
    std::cout << "==============================" << std::endl;
    return 0;
}