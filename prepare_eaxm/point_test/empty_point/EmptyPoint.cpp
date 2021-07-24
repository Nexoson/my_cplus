//
// Created by max66 on 2021/7/24.
//

#include "EmptyPoint.h"

void empty();
void wild();

int main(){
    // 空指针
//    empty();
    // 野指针
    wild();
    return 0;
}

void empty(){
    // 空指针
    int *p = NULL;

    // 访问空指针报错
    // 内存编号0 ~ 255 为系统占用内存, 不允许用户访问
    cout << *p << endl;
    /**
     * C++在运行时出现Signal: SIGSEGV (Segmentation fault)  问题，通常是访问了系统给这个程序所分配以外的内存空间。从而出现段错误，经常在使用指针时会出现。
     **/
}

void wild(){

    // 指针变量p 指向内存地址编号为0x1100的空间
    int * p = (int *)0x1100;

    // 访问野指针报错
    cout << *p << endl;
}