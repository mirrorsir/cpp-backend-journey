#include "Timer.h"
#include <thread> // 用于休眠，模拟耗时操作

void some_long_operation() {
    Timer timer; // 在函数开始时创建 Timer 对象
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
} // 函数结束，timer 对象被销毁，自动打印时间

int main() {
    some_long_operation();
    return 0;
}
