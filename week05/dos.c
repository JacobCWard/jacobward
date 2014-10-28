// Using system to execute dos commands

#include <stdio.h>

int main () {
	printf("This is your present working directory:\n");
	system("cd");
	printf("This is your path:\n");
	system("PATH");
	printf("This is the date:\n");
	system("date /T");
	printf("This is a directory listing:\n");
	system("dir");
	printf("This is a pause:\n");
	system("timeout 5");
}