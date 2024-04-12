/*********************************************************************
 * @file    times.h
 * @brief   define time functions
 * @details 常用处理最小时间：微秒/microseconds
 * @author  Shivelino
 * @date    2023.10.1
 * @version 0.2.0
 * @par Copyright(c): Concloud Software Corporation
 * @par todo:
 * @par history:
 *********************************************************************/
#pragma once
#include <chrono>
#include <string>

#include "type.h"

/**
 * @brief   获取程序执行时间（steady_clock）.
 * @details 程序从开始执行计算的的timestamp.
 * @return  毫秒时间戳（steady_clock）
 * @par todo:
 * @par history:
 */
ll get_procedure_time_milli();

/**
 * @brief   获取程序执行时间（steady_clock）.
 * @details 程序从开始执行计算的的timestamp.
 * @return  微秒时间戳（steady_clock）
 * @par todo:
 * @par history:
 */
ll get_procedure_time_micro();

/**
 * @brief   获取系统时间戳（system_clock）.
 * @details 按照ISO 8601规范从1970-01-01T00:00:00Z开始计算
 * @return  毫秒时间戳（system_clock）
 * @par todo:
 * @par history:
 */
ll get_time_stamp_milli();

/**
 * @brief   获取系统时间戳（system_clock）.
 * @details 按照ISO 8601规范从1970-01-01T00:00:00Z开始计算
 * @return  微秒时间戳（system_clock）
 * @par todo:
 * @par history:
 */
ll get_time_stamp_micro();

/**
 * @brief   获取当前系统时间的年月日时分秒.
 * @details
 * @param[out] year   年份
 * @param[out] month  月份
 * @param[out] day    日期
 * @param[out] hour   小时数
 * @param[out] minute 分钟数
 * @param[out] second 秒数
 * @par todo:
 * @par history:
 */
void get_now_time(int& year, int& month, int& day, int& hour, int& minute, int& second);

/**
 * @brief   微秒时间戳转time_t格式.
 * @details
 * @param[in] time_stamp_micro
 * @return
 * @par todo:
 * @par history:
 */
std::time_t time_stamp2time_t(ll time_stamp_micro);

/**
 * @brief   获取时间戳对应的格式化时间字符串.
 * @details
 * @par todo:
 * @par history:
 */
std::string get_format_time_string(ll time_stamp_micro);

/**
 * @brief   获取格式化时间字符串.
 * @details
 * @par todo:
 * @par history:
 */
std::string get_format_time_string_now();
