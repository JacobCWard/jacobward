//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	double num;
	printf("%d \n%s, \n %s \n", argc, argv[0], argv[1]);
	
		num = atof(argv[1]);
		printf("the square of %6.3f is %8.3f", num, num*num);
}