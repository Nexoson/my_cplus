//
// Created by max66 on 2021/10/16.
//

#include <iostream>

using namespace std;

void fun(int *pa, int n);

int SumArray(int *pa, int n) {
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
//        cout << i << " " << *(pa + 9);
        cout << i << " " << *(pa + i) << endl;
        *(pa + 9) += *(pa + i);
    }
    return sum;
}

int main() {
    int Any[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int n = 10;
    int sum = SumArray(Any, 10);
    cout << sum << endl;
    for (int i = 0; i < 10; i++) {
        cout << Any[i] << " ";
    }

}
