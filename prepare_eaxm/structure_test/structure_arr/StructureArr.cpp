//
// Created by max66 on 2021/7/25.
//

#include "StructureArr.h"

// 结构体定义
struct student {
    // 成员列表
    string name; // 姓名
    int age;     // 年龄
    int score;   // 分数
};

struct teacher {
    // 属性
    string name; // 姓名
    int age;     // 年龄
    int score;   // 分数
};

int main() {
    // 结构体数组
/*    struct student arr[3]={
            {"张三",18,80 },
            {"李四",19,60 },
            {"王五",20,70 }
    };

    for (int i = 0; i < 3; ++i) {
        cout << "姓名：" << arr[i].name << " 年龄：" << arr[i].age << " 分数：" << arr[i].score << endl;
    }*/

    struct teacher arr[3] = {
            {"黄", 30, 90},
            {"梅", 28, 99},
            {"陈", 27, 89}
    };

    cout << sizeof(arr) << endl;
    cout << sizeof(*arr) << endl;
    cout << &arr << endl;

    for (int i=0; i< sizeof(arr)/sizeof (*arr);++i){
        cout << "姓名：" << arr[i].name << " 年龄：" << arr[i].age << " 分数：" << arr[i].score << endl;
    }


    return 0;
}
