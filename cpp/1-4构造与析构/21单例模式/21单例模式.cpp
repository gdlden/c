#include<iostream>
using namespace std;

//单例模式指的是 一个类只能实例一个对象
class Maker {

    //1.构造函数私有化
    private:
    Maker() {
        cout << "Maker created." << endl;
    }
    private:
    //2. 定义一个类内的静态成员指针
    static Maker *pMaker;
    //2.拷贝构造函数私有化
    Maker(const Maker&) {
        cout << "Copy constructor called." << endl;
    }
    public:
        static Maker* getMaker() {
        return pMaker;
    }
    
};
//3. 在类外初始化时，new一个对象
Maker *Maker::pMaker = new Maker;
int main() {
    Maker *maker1 = Maker::getMaker();
    Maker *maker2 = Maker::getMaker();
    cout << "maker1 address: " << maker1 << endl;
    cout << "maker2 address: " << maker2 << endl;
    return 0;
}