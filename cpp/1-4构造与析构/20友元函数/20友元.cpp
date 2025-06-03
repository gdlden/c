#include<iostream>
using namespace std;
class Maker {
    public:
        Maker(int id, int age) {
            mId = id;
            mAge = age;
        }
    public:
        int mId;
        int mAge;
    private:
        // 友元函数可以访问私有成员
        friend void printMaker(const Maker &maker);
        void printMakerCon() const {
            cout << "This is a const function." << endl;
            cout << "id: " << mId << ", age: " << mAge << endl;
        }
};
void printMaker(const Maker &maker) {
    cout << "id: " << maker.mId << ", age: " << maker.mAge << endl;
    maker.printMakerCon(); 
}
int main() {
    Maker m1(1, 20);
    printMaker(m1); 
    return 0;
}