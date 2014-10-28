// A Ratio class

#include <iostream>
using namespace std;

class Ratio {
	public:
		Ratio(int n, int d);
		int getNum();
		int getDen();
		void setNum(int n);
		void setDen(int d);
		double convert();
		void invert();
		void print();
	private:
		int num;
		int den;
};

int main(){
	Ratio x(22,7);
	cout << "x = ";
	x.print();
	cout << " = " << x.convert() << endl;
	x.invert();
	cout << "1/x = "; x.print();
	cout << endl;
}

void Ratio::assign(int numerator, int denominator) {
	num = numerator;
	den = denominator;
}

double Ratio::convert() {
	return double(num)/den;
}

void Ratio::invert() {
	int temp = num;
	num = den;
	den = temp;
}

void Ratio::print() {
	cout << num << '/' << den;
}