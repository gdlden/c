#include<iostream>
using namespace std;


class Maker {
    public:
        Maker() {
            cout << "Maker()" << endl;
        }
        Maker(int n) {
            cout << "Maker(int n)" << endl;
        }
        ~Maker() {
            cout << "~Maker()" << endl;
        }
};
void test01() {
    int *arr = new int[10];
    for(int i=0;i<10;i++) {
        arr[i] = i + 1; // 初始化数组
    }
    for(int i=0;i<10;i++) {
        cout << arr[i] << " "; // 输出数组元素
    }
    delete[] arr; // 释放数组内存
    arr = NULL; // 防止野指针
}
void test02() {
    Maker *m = new Maker[10]; // 创建一个Maker对象数组
    delete[] m; // 释放Maker对象数组内存
    m = NULL; // 防止野指针
}
void test03() {
    //如果用void*来接new，那么调用delete的时候不会调用析构函数
    void *m = new Maker[2]; // 创建一个Maker对象
    delete m; // 释放Maker对象内存
    //在编译阶段，编译器就确定好了函数的调用地址，c++编译器不认识void*，不知道void*指向哪个函数，所以不会调用析构函数
    //这种变异方式叫静态联编
    m = NULL; // 防止野指针
}
int main() {
    test03();
    return 0;
}