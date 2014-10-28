//

#include <stdio.h>
#include <math.h>


int main () {
	double theta;
	double pi = M_PI;
	
	for(theta=0; theta<=2*pi; theta+=0.1){
		printf("%f \t %f\n", theta, sin(theta));
	}
}