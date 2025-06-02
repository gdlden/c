#include<iostream>
using namespace std;
// 空对象的大小是1
class Maker {
    public:

    //静态成员变量不占用类的大小
    static int a;


    int b; // 普通成员变量占用类的大小！！！！！！！！！！！！！

    //函数不占用类额大小
        Maker() {
            // 构造函数
        }
        ~Maker() {
            // 析构函数
        }
        //静态成员函数不占用类的大小
        static void show() {
            cout << "静态成员函数show()" << endl;
        }

};
int Maker::a = 10; // 静态成员变量初始化
int main() {
    //空对象的大小是1,
    cout << sizeof(Maker) << endl; // 输出类的大小
    Maker *m1= new Maker[20];
    cout << sizeof(m1) << endl; // 创建一个空对象,他的地址是8字节
    return 0;
}