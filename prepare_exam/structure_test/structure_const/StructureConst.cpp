//
// Created by max66 on 2021/7/25.
//

#include "StructureConst.h"

struct student {

    // 成员列表
    string name;
    int age;
    int score;
};
//const使用场景
void printStudent(const student *stu) { //加const防止函数体中的误操作

//    stu->age = 20; 操作失败，因为加了const修饰
    cout << stu << endl;
    stu = new student;
    cout << stu << endl;

}

int main() {
    student s1;
    s1.age = 20;
    s1.name = "张三";
    s1.score = 100;

    printStudent(&s1);

    return 0;
}


