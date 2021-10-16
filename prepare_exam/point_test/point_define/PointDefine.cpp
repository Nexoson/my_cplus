//
// Created by max66 on 2021/7/24.
//

#include <iostream>
#include "PointDefine.h"


int main(){

    // 1.指针定义
    // 定义整形变量a
    int a = 10;

    // 指针定义语法: 数据类型* 变量名
    int * p;

    // 指针变量赋值
    // 指针指向变量a的地址
    p = &a;

    cout<< &a << endl; // 打印数据a的地址
    cout<< p << endl;  // 打印指针变量p
    p = &a;


    // 2. 指针的使用
    // 通过*操作指针变量指向的内存
    cout<< "*p ="<< *p << endl;
//    system("pause");
    return 0;
}