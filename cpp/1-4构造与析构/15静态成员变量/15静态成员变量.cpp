#include<iostream>
using namespace std;
class Maker {
    public:
            static int a;
            //1. 静态成员变量生命周期是整个程序内，作用域是整个类
        Maker() {
        }
        ~Maker() {
            cout<< "~Maker()" << endl;
        }
};
//2. 静态成员变量必须在类外进行初始化
int Maker::a = 10; // 静态成员变量初始化
void test01() {
    cout << "静态成员变量a的值: " << Maker::a << endl;
    Maker m1; // 创建对象
    cout << "静态成员变量a的值: " << Maker::a << endl;
    Maker m2; // 创建另一个对象
    cout << "静态成员变量a的值: " << m2.a << endl;
}


class Maker2 {
    public:
        static int b;
        //3. 静态成员函数只能访问静态成员变量
        static void show() {
            cout << "静态成员函数show()，b的值: " << b << endl;
        }
};
class Maker3 {
    public:
        //4. 静态成员函数可以访问其他静态成员函数
        static void show() {
            cout << "静态成员函数show()，c的值: " << d << endl;
        }
    private:
        static int d;
};
int Maker3::d = 60;
void test03() {
    Maker3::show();
}

class Maker4 {
    public:
    //const修饰的成员变量最好在类内进行初始化
        const static int e = 100;
        const static int f; // 声明静态常量成员变量
};
const int Maker4::f = 200; // 也可以在类外进行初始化
int main() {
    test04();
    return 0;
}