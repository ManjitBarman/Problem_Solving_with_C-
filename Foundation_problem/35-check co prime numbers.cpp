//Program to check co prime numbers in C language

#include<stdio.h>

int main(){
	int a,b,i;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	// checking co prime
	int min=a<b?a:b;
	for(i=2;i<=min;i++){
		if(a%i==0&&b%i==0)
		break;
	}
	if(i==min+1)
	    printf("%d and %d are coprime numbers",a,b);
	else
		printf("%d and %d are not coprime numbers",a,b);
}
