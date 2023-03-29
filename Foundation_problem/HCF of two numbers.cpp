// HCF of two numbers 

#include<stdio.h>
int main()
{
	int a,b,H;
	printf("Enter two number for HCF: ");
	scanf("%d%d",&a,&b);
	for (H=a<b?a:b;H>=1;H--){     // start the loop maximum to min of both given numbers
	
		if(a%H==0&&b%H==0)       // check remainder ==0 or not 
		break;
	}
	printf("HCF of two number is : %d",H);
}
