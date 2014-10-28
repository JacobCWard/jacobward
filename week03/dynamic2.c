// Dynamic memeory allocation
// malloc: sets the amount of memeory you want
// this command returns a void pointer.
// You must cast to the correct type.
// C does not have a garbage collector
// You are responsible for memory management

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * strcopy(char *dp, char *sp);

int main (char *dp, char *sp) {
	char *src = "now is the time";
	char *dest;
	
	printf("source %s\n", src);
	dest = (char *) malloc (sizeof(char)*(strlen(src)+1));
	strcopy(dest, src);
	printf("destination = %s\n", dest);
	free(dest);
}

char * strcopy(char *dp, char *sp){
	while (*sp!='\0'){
		*dp = *sp;
	}
	*dp = '\0';
	return dp;
}