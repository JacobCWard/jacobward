// A Ratio class 3

#include <iostream>
#include "ratio.h"
using namespace std;

int main() {
    Ratio x(22,7);
    cout << "x = ";
    x.print();
    cout << " = " << x.convert() << endl;
    x.invert();
    cout << "1/x = "; x.print();
    cout << endl;
    int g = gcd(1111, 2222);
    cout << g << endl;
    x.setNum(1111);
    x.setDen(2222);
    cout << x.getNum() << endl;
    cout << x.getDen() << endl;
    x.reduce();
    x.print();
	cout << endl;
	Ratio y(x);
	cout << "After using the copy constructor" << endl;
	y.print();


  cout << endl;
  cout << "Testing non-member form of gcd: " << gcd(1234,5678) << endl;
}
