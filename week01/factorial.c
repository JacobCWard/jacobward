//

#include <stdio.h>

long factorial (long n);

int main () {
	int i;
	for (i = 0; i<=10; i++) {
		printf("%2d! = %d\n", i, factorial(i));
	}
	
}

long factorial (long n){
	if (n <= 1){
		return 1;
	}
	else {
		return (n * factorial(n-1));
	}
}