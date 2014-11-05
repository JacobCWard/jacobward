\// A Ratio class 3

#include <iostream>
using namespace std;

int gcd(int m, int n);

class Ratio {
public:
    Ratio(int n, int d);
    int getNum();
    int getDen();
    int setNum(int n);
    int setDen(int d);
    double convert();
    void invert();
    void print();
    void reduce();
private:
  		int num;
  		int den;
};

int main() {
    Ratio x(22,7);
    cout << "x = ";
    x.print();
    cout << " = " << x.convert() << endl;
    x.invert();
    cout << "1/x = "; x.print();
    cout << endl;
    x.setNum(1111);
    x.setDen(2222);
    cout << x.getNum() << endl;
    cout << x.getDen() << endl;
    x.reduce();
    x.print();
    cout << endl;
    cout << "Testing non-member form of gcd: " << gcd(1234,5678) << endl;
}

Ratio::Ratio(int n, int d){
    num = n;
    den = d;
}

double Ratio::convert() {
    return double(num)/den;
}

int Ratio::getNum(){
    return num;
}
int Ratio::getDen(){
    return den;
}
int Ratio::setNum(int n){
    num = n;
}
int Ratio::setDen(int d){
    den = d;
}
void Ratio::invert(){
    int temp = num;
    num = den;
    den = temp;
}

void Ratio::print(){
    cout << num << '/' << den;
}

int Ratio::gcd(int m, int n){
    int r;
    if (m<n) swap (m,n);
    while (n>0){
        r = m%n;
        m = n;
        n = r;
    }
    return m;
}

int Ratio::reduce(){
    int sign, g;
    if (num == 0 || den == 0){
        num = 0;
        den = 1;
    }
    if (den < 0) {
        den *= -1;
        num *= -1;
    }
    if (den == 1) {
        return;
    }
    sign = (num < 0?-1:1);  //if num < 0, then sign is -1 else sign is 1
}
