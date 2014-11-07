//8.	Write and test a function that simulates the rolling of two dice.
//      It should take an integer n that determines how many times the dice
//      are rolled then print a list showing the number of each possible outcome.

#include <stdio.h>
#include <math.h>
#include <time.h>

int main(){
    int n;
    printf("Please enter the number of times the dice should be rolled: ");
    scanf("%d",&n);
    int d1[n];
    int d2[n];
    int count[6];
    int i;
    for(i=0;i<n;i++){
        srand ( time(NULL) );
        d1[i]=(int)rand()%6+1;
        d2[i]=(int)rand()%6+1;
        printf("%d | %d\n",d1[i],d2[i]);
    }
    for(i=0;i<6;i++){
        if(d1[i]==i+1){
            count[i]++;
        }
        if(d2[i]==i+1){
            count[i]++;
        }
    }
    for(i=0;i<6;i++){
        printf("%d: %d\n",i+1,count[i]);
    }
}
