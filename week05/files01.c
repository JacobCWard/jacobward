// File I/O

#include <stdio.h>

int main () {
	FILE *fpt;
	fpt = fopen("awmt.txt", "r");
	char text[50000];
	int bytes_read = fread(text,1,50000, fpt);
	printf("%s\n", text);
	printf("The number of bytes read = %d\n", bytes_read);
}