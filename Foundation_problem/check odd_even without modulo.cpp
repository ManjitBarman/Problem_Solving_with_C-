//Programming in C Check Even number without % operator

#include<stdio.h>

int main(){
	int x;
	printf("Enter a number to check odd/even: ");
	scanf("%d",&x);
	
	if(x&1){                         //The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on
	                                 //every bit of two numbers. The result of AND is 1 only if both bits are 1
		printf("\nthis is odd number");
	}
	else
	printf("\nthis is even number");

}
