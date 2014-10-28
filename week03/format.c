//

#include <stdio.h>
#include <limits.h>

int main (){
	char ch ='$';
	int n = 5;
	unsigned int m = 37;
	long long k = 123456789;
	double t = 3.14159;
	char *str = "now is the time";
	printf("character: %c\n", ch);
	printf("int: %d\n", n);
	printf("unsigned int: %u\n", m);
	printf("long long: %lld\n", k);
	printf("float: %f\n", t);
	printf("string: %s\n", str);
	
	printf("The size of long long: %d\n", sizeof(k));
	printf("INT_MAX: %d\n", INT_MAX);
	printf("INT_MIN: %d\n", INT_MIN);
}