//4.	Write code that uses a for loop and prints out a list of the squares of
//n from n=1 to n=100, giving n and n^2  (ex. 3 -> 9).

#include <stdio.h>

int main(){
    int n;
    for(n=1;n<=100;n++){
        if(n%2==1){
            printf("n= %d\tn^2= %d\t",n,n*n);
            if(n*n<100){
                printf("\t");
            }
        }
        else{
            printf("n= %d\tn^2= %d\n",n,n*n);
        }
    }
}
