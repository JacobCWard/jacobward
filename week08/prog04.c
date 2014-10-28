//

#include <stdio.h>
#include <math.h>

int main () {
	int n;
	
	for (n=1;n<=10;n++){
		printf("The cube of %x is %x \n", n,(int)pow(n,3));
	}
}
