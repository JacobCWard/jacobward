//

#include <stdio.h>

int main () {
	unsigned long long n = 1;
	int i;
	
	for (i =1; i<=64;i++){
		n = n << 1;
		printf("2^%d -> %llu \n", i, n);
	}
}