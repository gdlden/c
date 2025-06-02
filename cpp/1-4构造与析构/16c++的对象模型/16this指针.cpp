#include<iostream>
using namespace std;
class Maker {
    public:
        Maker(int id, int age) {
            mId = id;
            mAge = age;
        }
        void show() {
            cout<< this->mAge << endl; // 使用this指针访问成员变量
            cout<< this->mId << endl; // 使用this指针访问成员变量
        }
    public:
        int mId;
        int mAge;
};

//this指针的作用
//1. 当行参名与成员变量名相同时，区分
//2. 返回对象本身，运算符重载时有用
int main() {
    Maker m1(1, 18);
    m1.show(); // 调用成员函数
    return 0;
    m1.show();
}