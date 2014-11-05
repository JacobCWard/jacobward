//5.	Write a function that prints out if an integer is even or odd. Test it on 4 different integers.

#include <stdio.h>

int main(){
    int a[4];
    int i;
    printf("Enter Integer 0: ");
    scanf("%d",&a[0]);
    printf("Enter Integer 1: ");
    scanf("%d",&a[1]);
    printf("Enter Integer 2: ");
    scanf("%d",&a[2]);
    printf("Enter Integer 3: ");
    scanf("%d",&a[3]);
    printf("Integer:\n0\t1\t2\t3\n%d\t%d\t%d\t%d\n",a[0],a[1],a[2],a[3]);
    for(i=0;i<4;i++){
        if(a[i]%2==1){
            printf("Odd\t");
        }
        else{
            printf("Even\t");
        }
    }
    printf("\n");
}
