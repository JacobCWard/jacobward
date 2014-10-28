//

#include <stdio.h>

void swap (int x, int y);

int main(){
	int x = 1;
	int y = 123;
	
	printf("Before swapping: x = %d y = %d\n", x,y);
	swap(x,y);
	printf("After swapping: x = %d y = %d\n", x,y);
}

void swap (int x, int y){
	int tmp = x;
	x=y;
	y=tmp;
}