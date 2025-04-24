#include <cstdlib>
#include <iostream>
#include <ostream>
using namespace std;
class Maker {
    private:
    int a;
    public:
    int b;
    Maker() {
        cout<< "空参构造" << endl;
    }
    Maker(int a) {
        cout<< "带一个参数构造" << endl;
    }
};

int main () 
{
    Maker maker;
    maker.b=10;
    cout << "Hello world" << maker.b << endl;
    return EXIT_SUCCESS;
}