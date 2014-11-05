// A Ratio class 3

#include <iostream>
using namespace std;

int gcd(int m, int n);

class Ratio {
  friend Ratio operator*(Ratio & x, Ratio & y);
  friend Ratio operator+(Ratio & x, Ratio & y);
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

Ratio operator*(Ratio & x, Ratio & y){
  Ratio z(x.num*y.num, x.den*y.den);
  z.reduce();
  return z;
}

Ratio operator+(Ratio & x, Ratio & y){
  Ratio z(x.num*y.den + y.num*x.den, x.den*y.den);
  z.reduce();
  return z;
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

int gcd(int m, int n){
    int r;
    if (m<n) swap (m,n);
    while (n>0){
        r = m%n;
        m = n;
        n = r;
    }
    return m;
}

void Ratio::reduce(){
    int sign, g;
    if (num == 0 || den == 0){
        num = 0;
        den = 1;
    }
    if (den < 0) {
        den *= -1;
        num *= -1;
    }
    if (den == 1) return;
    //if num < 0, then sign is -1 else sign is 1
    sign = (num < 0?-1:1);
    g = gcd(sign*num, den);
    num = num/g;
    den = den/g;

}
