#include<iostream>
using namespace std;
class Printer {
    private:
    static int printCount;
    static Printer *pPrinter;
    Printer() {
        printCount = 0;
        cout << "Printer created." << endl;
    }
    Printer(const Printer&) {
        cout << "Copy constructor called." << endl;
    }
    
    public:
    static Printer* getPrinter() {
        printCount++;
        cout << "Print count: " << printCount << endl;
        return pPrinter;
    }
};
Printer *Printer::pPrinter = new Printer;
int main() {
    Printer *printer1 = Printer::getPrinter();
    Printer *printer2 = Printer::getPrinter();
    Printer *printer3 = Printer::getPrinter();
    return 0;
}