#include <cstring>
#include <iostream>
using namespace std;

class Maker {
    public:
        Maker(int id,int age) {
            mId=id;
            mAge=age;
        }
    public:
        int mId;
        int mAge;
};
class Maker2 {
    public:
        Maker2(const char *name,int Age) {
            pName=(char*)malloc(strlen(name)+1);
            strcpy(pName,name);
            mAge=Age;
        }
        Maker2(const Maker2 &m) {
            pName=(char*)malloc(strlen(m.pName)+1);
            strcpy(pName,m.pName);
            mAge=m.mAge;
        }
    public:
        char *pName;
        int mAge;
    ~Maker2() {
        if (pName != NULL) {
            free(pName);
            pName = NULL;
        }
    }
};
void test01() {
    Maker m1(1,18);
    Maker m2(m1);
    cout << "m1.id:" << m1.mId << "m1.age" << m1.mAge << endl;
    cout << "m2.id:" << m2.mId << "m2.age" << m2.mAge << endl;

}
void test02() {
    Maker2 m2 = Maker2("zhangsan", 18);
    Maker2 m3(m2);
    cout << "m2.name:" << m2.pName << "m2.age" << m2.mAge << endl;
}
int main() {
    // test01();
    test02();

    return 0;
}