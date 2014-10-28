//pointers

#include <stdio.h>

int main(){
	char c[5] = "now";
	
	printf("%p\n", &c);
	printf("%p\n", c);
	printf("%p\n", c[0]);
	printf("%c\n", c[0]);
}