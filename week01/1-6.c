//6.	Write and test a function that computes the distance between two points in 2D.

#include <stdio.h>
#include <math.h>

int main(){
    int pt1[2];
    int pt2[2];
    double d;

    printf("Enter x1: ");
    scanf("%d",&pt1[0]);
    printf("Enter y1: ");
    scanf("%d",&pt1[1]);
    printf("Enter x2: ");
    scanf("%d",&pt2[0]);
    printf("Enter y2: ");
    scanf("%d",&pt2[1]);
    d = sqrt(pow(pt2[0]-pt1[0],2)+pow(pt2[1]-pt1[1],2));
    printf("Distance between pt1 and pt2 = %f\n",d);
}
