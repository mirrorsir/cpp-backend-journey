#include "Student.h" // main 函数现在只需要关心 Student 的接口

int main() {
    {
        Student stu("Li Si", 22);
        stu.printInfo();
    }
    return 0;
}
