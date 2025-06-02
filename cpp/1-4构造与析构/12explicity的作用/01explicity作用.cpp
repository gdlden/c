#include <algorithm>
using namespace std;
class Maker{
    public:
    //只能放在构造函数前面，构造函数只有一个参数，或者其他参数有默认值时
        explicit Maker(int n) { //防止出现 Maker m = 10; 这种隐式转换
        }
    public:
};
int main() {
    // Maker m=10;
    Maker m2(10); //显式转换
    return 0;
}