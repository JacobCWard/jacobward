// A Ratio class 3

#include <iostream>
using namespace std;

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
    int gcd(int m, int n);
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
    int g = x.gcd(1111, 2222);
    cout << g << endl;
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
