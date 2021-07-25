//
// Created by max66 on 2021/7/25.
//

#include "StructurePoint.h"

// 结构体定义
struct student{
    //成员列表
    string name;  //姓名
    int age;      //年龄
    int score;    //分数
};

int main() {

    struct student stu = { "张三",18,100, };
    student * p = &stu;
    //指针通过 -> 操作符可以访问成员
    p->score = 80;
    cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
    return 0;
}