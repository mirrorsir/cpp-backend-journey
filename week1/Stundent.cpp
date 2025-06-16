#include <iostream>
#include <string>

// 使用 C++11 的 `override` 和 `final` 关键字 (如果适用)
// 使用 RAII 思想，这里虽然简单，但要时刻有这个意识
class Student {
private:
    std::string name_;
    int age_;

public:
    // 构造函数
    Student(const std::string& name, int age) : name_(name), age_(age) {
        std::cout << "Student " << name_ << " created." << std::endl;
    }

    // 析构函数
    ~Student() {
        std::cout << "Student " << name_ << " destroyed." << std::endl;
    }

    void printInfo() const {
        std::cout << "Name: " << name_ << ", Age: " << age_ << std::endl;
    }
};

int main() {
    {
        Student stu("Zhang San", 20);
        stu.printInfo();
    } // stu 对象在这里会被自动销毁，因为它的生命周期结束了

    return 0;
}
