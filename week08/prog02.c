//

#include <stdio.h>

int main () {
	int n;
	int m;
	int sum;
	
	printf("Enter first integer\n");
	scanf("%d", &n); // address of n
	
	printf("Enter second integer\n");
	scanf("%d", &m); // address of m
	
	sum = n + m;
	printf("Sum is %d\n", sum);
	
}