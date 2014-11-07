//7.	Write and test a function that computes n values of the sine function evenly spaced between 0 and 2Pi.

#include <stdio.h>
#include <math.h>

int main(){
    double interval;
    int i;
    double a;

    printf("Please enter the interval: ");
    scanf("%lf",&interval);
    interval=360/interval;
    printf("Interval concluded: %f\u00B0\n",interval);
    for(i=0;i<=360;i+=interval){
        a=sin(i*(M_PI/180));
        printf("sin(%d) = %f\n", i, a);
    }
}
