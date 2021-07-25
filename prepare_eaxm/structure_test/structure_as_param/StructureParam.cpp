//
// Created by max66 on 2021/7/25.
//

#include "StructureParam.h"

// 学生结构体定义
struct student {
    //成员列表
    string name;  //姓名
    int age;      //年龄
    int score;    //分数
};

//值传递
void printStudent(student stu) {
    stu.age = 88;
    cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
}

//地址传递
void printStudent2(student *stu) {
    stu->age = 28;
    cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;
}


int main() {
    // 总结：如果不想修改主函数中的数据，用值传递，反之用地址传递 (C++中的地址传递就是Java中的值传递, Java中传的是引用地址, C++的值传递像是传了一个对象拷贝)
    student stu = {"张三", 18, 100};
    // 值传递(传对象拷贝)
    printStudent(stu);
    // 地址传递
//    printStudent2(&stu);
    cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
    return 0;
}

