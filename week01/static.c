//

#include <stdio.h>

void staticVariable (int n);

int main () {
	printf("First call to function:\n");
	staticVariable(5);
	printf("\nSecond call to function\n");
	staticVariable(11);
	printf("\nThird call to function\n");
	staticVariable(37);
	
}

void staticVariable (int n){
	static int test = 0;
	test = test + n;
	printf("variable test = %d\n", test);
}