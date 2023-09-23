#pragma once
#include <vector>
template<typename T>
T sum_all(T arg);
template<typename T, typename... Args>
T sum_all(T arg, Args... args);
template<typename T>
T sum_all(const std::vector<T>& vec);
void extraTask();