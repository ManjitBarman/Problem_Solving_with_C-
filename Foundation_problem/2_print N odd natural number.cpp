// program to print first N odd natural numbers using loop

#include<stdio.h>

int main()
{
	int i,n;
	printf("Enter how many odd natural number to print: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf(" %d",(2*i)-1);
	}
	return 0;
}
