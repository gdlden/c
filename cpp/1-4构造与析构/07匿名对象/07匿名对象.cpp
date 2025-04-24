#include<iostream>
using namespace std;
class Maker {
public:
    Maker() {
        cout << "Maker()" << endl;
    }
    Maker(int a) {
        cout << "有参构造" << endl;
    }
    ~Maker() {
        cout << "~Maker()" << endl;
    }
    Maker(const Maker &maker) {
        cout << "拷贝构造" << endl;
    }
};
void test() {
    Maker();//匿名对象的生命周期在当前行

    cout << "test" << endl;
}
int main() {
    test();

    return 0;
}