#include<iostream>
using namespace std;
class MPrinter {
    private:
        static int printCount;
        static MPrinter *pPrinter;
        MPrinter() {
        printCount = 0;
        cout << "Printer created." << endl;
            }
        MPrinter(const MPrinter&) {
            cout << "Copy constructor called." << endl;
        }
    
    public:
        static MPrinter* getPrinter() {
        printCount++;
        cout << "Print count: " << printCount << endl;
        return pPrinter;
    }
};
MPrinter *MPrinter::pPrinter = new MPrinter;
int MPrinter::printCount = 0;
int main() {
    MPrinter *printer1 = MPrinter::getPrinter();
    MPrinter *printer2 = MPrinter::getPrinter();
    MPrinter *printer3 = MPrinter::getPrinter();
    return 0;
}