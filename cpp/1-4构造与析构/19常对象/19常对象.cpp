#include<iostream>
using namespace std;
class Maker {
    public:
        Maker(int id, int age) {
            mId = id;
            mAge = age;
        }
        void printMaker() {
            cout << "id: " << mId << ", age: " << mAge << endl;
        }
        void printMakerCon() const {
            cout<< "This is a const function." << endl;
            cout << "id: " << mId << ", age: " << mAge << endl;
        }
    public:
        int mId;
        int mAge;
        mutable int score; // mutable修饰的变量可以在常函数中修改
};
int main() {
    const Maker m1 = Maker(1, 20);
    // m1.mId = 100; // 错误：不能修改成员变量，因为m1是常对象
    m1.printMakerCon(); // 正确：可以调用常函数
    // m1.printMaker(); // 错误：不能调用非常函数，因为m1是常对象
    m1.score = 100; // 正确：可以修改mutable修饰的成员变量
    cout << "score:" << m1.score << endl; 
    return 0;
}