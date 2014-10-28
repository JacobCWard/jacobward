//

#include <stdio.h>
#include <math.h>

void toUppercase(char *sptr);


int main () {
	char s1[20];
	char s2[] = "now is the time";
	int i;
	
	printf("Enter a string: ");
	scanf("%s", s1);
	
	printf("s1 is %s\ns2 is: %\n", s1, s2);
	printf("Printing s1 one character at a time", s1,s2);
	for (i=0;s1[i] != '\0'; i++) {
		printf("%c ", s1[i]);
	}
	
	printf("\n");
	
	printf("Printing s1 one character at a time not looking for the null characters");
	for(i=0; i<19999; i++){
		printf("%c ", s1[i]);
	}
	
}