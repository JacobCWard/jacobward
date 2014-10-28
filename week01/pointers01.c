//

#include <stdio.h>

int main(){
	int n = 10;
	int *iptr = &n;
	char c = 'a';
	char *cptr = &c;
	
	printf("n is %d\n", n);
	printf("iptr is %p\n",iptr);
}