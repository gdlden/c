#include<iostream>
using namespace std;
class Maker {
    public:
        Maker(int id, int age) {
            mId = id;
            mAge = age;
        }
        void printMaker() const  {
            //mId = 100; // 错误：不能修改成员变量，因为该函数时常函数
            //const修饰的是this指针指向的空间中的变量不能改变
            //Maker *const this;
            //const Maker *const this;这是常函数修饰的
            score = 100; // mutable修饰的变量可以在常函数中修改
        }
    public:
        int mId;
        int mAge;
        mutable int score;
};
void test1() {
    Maker maker(1, 20);
    maker.printMaker();
    cout << "id: " << maker.mId << ", age: " << maker.mAge << ", score: " << maker.score << endl;
}
int main() {
    test1();
    return 0;
}