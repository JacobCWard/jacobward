//

#include <stdio.h>
#include <math.h>



int main () {
	char s1[]="now is the time for all good programmers";
	int i;
	
	printf("s1 is: %s\n", s1);
	
	printf("Printing s1 one character at a time", s1);
	for (i=0;s1[i] != '\0'; i++) {
		printf("%c ", s1[i]);
	}
	
	printf("\n");
	
	char s2[100];
	printf("Enter a string: ");
	scanf("%100[^\n]", s2);
	printf("s2 is: %s\n", s2);
}

/*
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
*/