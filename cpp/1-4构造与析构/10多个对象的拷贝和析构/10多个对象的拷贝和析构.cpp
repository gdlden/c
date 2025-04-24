#include<iostream>
using namespace std;
class BMW {
    public:
    BMW(int a) {
        cout << "bmw构造函数" << a << endl;
    };
    ~BMW(){
cout << "bmw析构函数" << endl;
    };
};
class Buick{
    public:
    Buick()
    {
        cout << "buick 构造" << endl;
    }
    ~Buick() {
        cout << "buick 析构" << endl;
    }
};

class Maker{
    public:
    //初始化列表 初始化列表只能写在构造函数
    Maker(int a):bmw(a) {
        cout << "maker构造" << endl;
    }
    ~Maker() {
        cout << "maker析构" << endl;
    }
    private:
    BMW bmw;
    Buick buick;

};

//如果类有成员对象，那么先调用成员对象的j构造函数，再调用本身的构造函数
//析构函数的调用顺序反之
//成员对象的对象和定义顺序一样
//如果有成员对象，那么要保证成员对象的构造和析构能被调用
void test01() {
Maker m(30);
}
int main() {
    test01();
    return 0;
}