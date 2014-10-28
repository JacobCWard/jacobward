//call by reference versus call by value

#include <stdio.h>

void cubeByValue(int n);
void cubeByReference(int *iptr);


int main() {
	int n = 10;
	
	printf("The original value of n is %d\n", n);

	cubeByValue(n);
	
	printf("The value of n after call-by-value is %d\n\n",n);
	
	cubeByReference(&n);
}

void cubeByValue(int n){
	n=n*n*n;
	printf("input cube is %d\n", n);
}

void cubeByReference (int *iptr){
	*iptr = (*iptr)*(*iptr)*(*iptr);
	printf("Input cube is %d \n", *iptr);
}