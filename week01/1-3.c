#include <stdio.h>

int main(){
	int i;
	int j=1;
	
	for(i=1;i<21;i++){
		j=j*2;
		printf("2^%d=\t%d\n",i,j);
	}
}