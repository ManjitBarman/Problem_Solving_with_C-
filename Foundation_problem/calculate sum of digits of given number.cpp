// write a program to calculate sum of digits of a given number

#include<stdio.h>

int main(){
	int x,remainder,sum=0;
	printf("Enter a number : ");
	scanf("%d",&x);
	while(x!=0){
		remainder=x%10;
		sum=sum+remainder;
		x=x/10;
	}
	printf("\nSum of digits is: %d",sum);
}
