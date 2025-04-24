#include<iostream>
using namespace std;
class Maker {
public:
    Maker() {
        cout << "无参构造" << endl;
    }
    Maker(int a) {
        cout << "有参构造" << endl;
    }
    ~Maker() {
        cout << "析构函数" << endl;
    }
    Maker(const Maker &maker) {
        cout << "拷贝构造" << endl;

    }
};

//1对象以值得方式给函数参数
void func(Maker m) {
    Maker();//匿名对象的生命周期在当前行

    cout << "test" << endl;
}

void test01() {
    Maker m1;
    func(m1);
}

//2用一个已有对象去初始化另一个对象
void test02() {
    Maker m1;
    Maker m2(m1);
}
//3函数的局部对象以值的形式从函数返回
//vs release模式不会，qt不会，debug模式会
Maker func2() {
    Maker m;
    cout << "局部对象的地址：" << &m <<endl;
    return m;
}
void test03() {
    Maker m1 = func2();
    cout << "m1地址:" << &m1 << endl; 
}

int main() {
    test03();
    return 0;
}