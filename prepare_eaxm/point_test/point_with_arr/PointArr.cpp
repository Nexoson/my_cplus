//
// Created by max66 on 2021/7/24.
//

#include "PointArr.h"

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // 指向数组的指针
    int *p = arr;

    cout << "第一个元素: " << arr[0] << endl;

    cout << "指针访问的第一个元素: " << *p << endl;

    for (int i = 0; i < 10; ++i) {
        // 利用指针遍历数组
        cout << "第"<<i<<"个元素: " << *p << endl;
        // 按照指针类型往后推
        p++;
    }
    return 0;
}
