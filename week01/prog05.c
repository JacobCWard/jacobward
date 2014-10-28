//

#include <stdio.h>

int cube(int y); // Function prototype

int main () {
	int n;
	
	for (n=1;n<=10;n++){
		printf("%d \n", cube(n));
	}
}

int cube (int m){
	return m*m*m;
}