//
// Created by max66 on 2021/7/25.
//

#include "PointFunction.h"

void swap(int *p1, int *p2);


int main() {

    /**
     * -----* point 在等号前面是 操作 此指针指向的内存空间的数据
     * -----* point 在等号后面是 取出此 指针指向内存空间的数据
     */

    int a = 10;
    int b = 20;
    swap(&a, &b);
    cout<< a << endl;
    cout<< b << endl;
    return 0;
}

void swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

