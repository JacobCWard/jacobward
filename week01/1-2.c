//

#include <stdio.h>

int main(){
	int a;
	int b;
	int c;
	int sum;
	int difference;
	int product;
	double quotient;
	int mod;
	double a2;
	int bin[6]={0,0,0,0,0,0};
	
	printf("Enter first value\n");
	scanf("%d", &a);
	printf("Enter second value\n");
	scanf("%d", &b);
	printf("Enter third value\n");
	scanf("%d", &c);

	printf("Illustrate the following operators:\n");
	printf("Arithmetic operators: +, -, *, /, %\n");
	
	a2=a;
	sum=a+b;
	difference=a-b;
	product=a*b;
	quotient=a2/b;
	mod=a%b;
	
	printf("\n%d + %d = %d\n", a,b,sum);
	printf("%d - %d = %d\n", a,b,difference);
	printf("%d * %d = %d\n", a,b,product);
	printf("%d / %d = %g\n", a,b,quotient);
	printf("%d %% %d = %d\n\n", a,b,mod);
	
	printf("Relational operators: (1=true, 0=false)\n<\t>\t<=\t>=\t==\t!=\n");
	if(a<b){
		bin[0]=1;
	}
	if(a>b){
		bin[1]=1;
	}
	if(a<=b){
		bin[2]=1;
	}
	if(a>=b){
		bin[3]=1;
	}
	if(a==b){
		bin[4]=1;
	}
	if(a!=b){
		bin[5]=1;
	}
	printf("%d\t%d\t%d\t%d\t%d\t%d\t\n\n",bin[0],bin[1],bin[2],bin[3],bin[4],bin[5]);
		
	printf("Logical operators: &&, ||, and !\n");
	printf("Testing && operator\nif a-b>0&&c>=0\n");
	if(a-b>0&&c>=0){
		printf("true\n\n");
	} else{
		printf("false\n\n");
	}
	printf("Testing && operator\nif a-b>0||c>=0\n");
	if(a-b>0||c>=0){
		printf("true\n\n");
	} else{
		printf("false\n\n");
	}
	printf("Testing ! operator\nif a-b>0||!(c>=0)\n");
	if(a-b>0||!(c>=0)){
		printf("true\n\n");
	} else{
		printf("false\n\n");
	}
}