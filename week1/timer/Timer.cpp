#include "Timer.h"

Timer::Timer() {
    start_point_ = std::chrono::high_resolution_clock::now();
}

Timer::~Timer() {
    auto end_point = std::chrono::high_resolution_clock::now();
    auto start = std::chrono::time_point_cast<std::chrono::microseconds>(start_point_).time_since_epoch().count();
    auto end = std::chrono::time_point_cast<std::chrono::microseconds>(end_point).time_since_epoch().count();
    auto duration = end - start;
    double ms = duration * 0.001;
    std::cout << "Timer took " << ms << " ms" << std::endl;
}
