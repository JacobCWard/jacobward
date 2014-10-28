// Dynamic memeory allocation
// malloc: sets the amount of memeory you want
// this command returns a void pointer.
// You must cast to the correct type.

#include <stdio.h>
#include <stdlib.h>

int main () {
	int n;
	int i;
	int *a;
	
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	a = (int *) malloc(n*sizeof(int));
	for (i=0; i<n;i++){
		scanf("%d", (a+i));
	}
	printf("Here are the same numbers in reverse order: \n");
	for (i=n-1;i>=0;i--){
		printf("%d \n", a[i]);
	}
}