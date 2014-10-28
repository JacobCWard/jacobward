//

#include <stdio.h>
#include <math.h>

void to Uppercase(char *sptr);


int main () {
	char s[] "now is the time";
	
	printf("The string before conversation is %s", s);
	toUppercase(s);
	printf("\n The string after conversation is: %s\n", s);
}

void toUppercase(char &sptr){
	while (*sptr != '\0'){
		*sptr = toupper (*sptr);
		++sptr;
	}
}