#include "iostream"
using namespace std;
int main() {
    int age;
    float hight;
    char gender;
    string name;

    age = 21;
    hight = 175.2;
    gender = 'm';
    name = "小明";
    cout << "age=" << age <<  endl;
    cout << name << "的年纪：" << age;
    cout << name << "的身高：" << hight;
    cout << name << "的性别：" << gender;
    return 0;
}