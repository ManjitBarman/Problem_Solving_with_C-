// check a given number is prime or not

#include<stdio.h>

int main(){
	int i,x;
	printf("Enter a number : ");
	scanf("%d",&x);
	for(i=2;i<=x-1;i++){  // loop starts from 2 to given_number-1
		if(x%i==0)
		break;
	}
	if(i==x)
		printf("\n%d is a prime number",x);
	else
	    printf("\n%d is not a prime number",x);

}
