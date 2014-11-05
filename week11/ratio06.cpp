// A Ratio class 3

#include <iostream>
#include "ratio.h"
using namespace std;

int main() {
    Ratio x(2,3);
    Ratio y(2,5);
    Ratio z(1,1);
    cout << "x = ";
    x.print();
    cout << "y = ";
    y.print();
    cout << endl;
    z = x*y;
    cout << "x*y = ";
    z.print();
    cout << endl;
    z = x+y;
    cout << "x+y = ";
    z.print();
    cout << endl;
}
