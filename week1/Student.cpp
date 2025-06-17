#include "Student.h" // 包含对应的头文件

Student::Student(const std::string& name, int age) : name_(name), age_(age) {
    std::cout << "Student " << name_ << " created." << std::endl;
}

Student::~Student() {
    std::cout << "Student " << name_ << " destroyed." << std::endl;
}

void Student::printInfo() const {
    std::cout << "Name: " << name_ << ", Age: " << age_ << std::endl;
}
