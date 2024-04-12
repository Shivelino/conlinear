/*********************************************************************
 * @file    string_util.cpp
 * @brief
 * @details
 * @author  Shivelino
 * @date    2023.10.2
 * @version 0.2.0
 * @par Copyright(c): Concloud Software Corporation
 * @par todo:
 * @par history:
 *********************************************************************/
#include "shared/string_util.h"

#include <algorithm>

std::string string_lower(const std::string& s) {
    std::string ret = s;
    std::transform(ret.begin(), ret.end(), ret.begin(), ::tolower);
    return ret;
}

std::string string_upper(const std::string& s) {
    std::string ret = s;
    std::transform(ret.begin(), ret.end(), ret.begin(), ::toupper);
    return ret;
}