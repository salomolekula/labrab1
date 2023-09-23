#include <iostream>
#include <vector>
#include <numeric>
#include "taskExtra.h"
template<typename T>
T sum_all(T arg) {
	return arg;
}

template<typename T, typename... Args>
T sum_all(T arg, Args... args) {
	return arg + sum_all(args...);
}

template<typename T>
T sum_all(const std::vector<T>& vec) {
	return std::accumulate(vec.begin(), vec.end(), T());
}

void extraTask()
{
	int sum1 = sum_all(1, 2, 3, 4, 5);
	std::cout << "Ñóììà: " << sum1 << std::endl;

	double sum2 = sum_all(1.5, 2.5, 3.5);
	std::cout << "Ñóììà: " << sum2 << std::endl;

	std::vector<int> vec = { 1, 2, 3, 4, 5 };
	int sum3 = sum_all(vec);
	std::cout << "Ñóììà: " << sum3 << std::endl;
}