#pragma once
#include <chrono>
#include <iostream>

class Timer {
public:
    Timer();
    ~Timer();
    Timer(const Timer&) = delete;
    Timer& operator=(const Timer&) = delete;
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_point_;
};
