//
// Created by max66 on 2021/7/24.
//


#include "PointSize.h"

int main() {

    int a = 10;

    int * p;
    // 指针指向数据a的地址
    p = &a;
    //* 解引用
    cout<< *p << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(char *) << endl;
    cout << sizeof(float *) << endl;
    cout << sizeof(double *) << endl;
    return 0;
}
