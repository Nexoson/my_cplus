//
// Created by max66 on 2021/7/24.
//

#include "ConstPoint.h"

int main() {

    /**
     * 技巧：看const右侧紧跟着的是指针还是常量, 是指针就是常量指针，是常量就是指针常量
     *
     * 1.const修饰指针 — 常量指针
     * 2.const修饰常量 — 指针常量
     * 3.const既修饰指针，又修饰常量
     */
    int a = 10;
    int b = 10;

    // 常量指针  const 修饰的是指针, 指针指向可以改,指针指向的值不可以改
    const int * p1 = &a;
    p1 = &b;
//    *p1 = 100;  报错

    // 指针常量 const 修饰的是常量, 指针指向不可以改,指针指向的值可以修改
    int * const p2 = &a;
//    p2 = &b; c错误
    *p2 = 100;


    // const 既修饰指针又修饰常量
    const int * const p3 = &a;
    //p3 = &b; //错误
    //*p3 = 100; //错误
    return 0;
}