#pragma once // 防止头文件重复包含

#include <iostream>
#include <string>

class Student {
private:
    std::string name_;
    int age_;

public:
    Student(const std::string& name, int age);
    ~Student();
    void printInfo() const;
};
