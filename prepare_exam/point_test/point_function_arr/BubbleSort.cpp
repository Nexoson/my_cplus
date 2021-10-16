//
// Created by max66 on 2021/7/25.
//

#include "BubbleSort.h"

void bubbleSort(int *arr, int len);


/**
 * 封装一个函数，利用冒泡排序，实现对整型数组的升序排序
 * @return
 */
int main() {
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    bubbleSort(arr, sizeof(arr) / sizeof(*arr));
//    cout<< sizeof(arr)/sizeof(* arr) << endl;

    for (int i = 0; i < sizeof(arr) / sizeof(*arr); ++i) {
        cout << arr[i] << endl;
    }

    return 0;
}

void bubbleSort(int *arr, int len) {

    // 循环数组
    for (int i = 0; i < len; i++) {
        int temp;
        for (int j = 0; j < len - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}