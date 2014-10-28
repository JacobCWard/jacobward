// Structures

#include <stdio.h>
#include <math.h>

typedef struct {
	double re;
	double im;
}Complex;

double modulus (Complex c);


int main(){
	Complex z1;
	Complex z2;
	Complex *zptr;
	
	z1.re = 1.0;
	z1.im = 1.0;
	printf("The length of z1 is %f \n", modulus(z1));
	
	zptr = &z2;
	zptr->re = 3.0;
	zptr->im = 4.0;
	printf("The length of z2 is %f \n", modulus(z2));
	
}

double modulus (Complex c) {
	double x = c.re;
	double y = c.im;
	
	return sqrt(x*x + y*y);
}