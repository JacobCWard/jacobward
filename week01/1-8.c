//8.	Write and test a function that simulates the rolling of two dice.
//      It should take an integer n that determines how many times the dice
//      are rolled then print a list showing the number of each possible outcome.

#include <stdio.h>
#include <math.h>
#include <time.h>

int count[6];

int main(){
    int n;
    printf("Please enter the number of times the dice should be rolled: ");
    scanf("%d",&n);
    int d1;
    int d2;
    int i;
    srand(getpid());
    while(n>0){
        d1=rand()%6+1;
        d2=rand()%6+1;
        //printf("%d | %d\n",d1,d2);
        count[d1-1]++;
        count[d2-1]++;
        n--;
    }
    for(i=0;i<6;i++){
        printf("%d: %d\n",i+1,count[i]);
    }
}
