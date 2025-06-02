#include <cstddef>
#include <cstdlib>
#include<iostream>
using namespace std;
class Make{
    public:
    Make() {
        cout << "Make()" << endl;
    }
    ~Make() {
        cout << "~Make()" << endl;
    }
};
void test01() {
    //用c语言的方式不会调用构造函数和析构函数
    Make *m = (Make*)malloc(sizeof(Make));

}
void test02() {
    Make *m = new Make(); //调用构造函数
    delete m; //调用析构函数
    m=NULL; //防止野指针
    }
int main() {
    test02();
    return 0;
}