//Program to print all Armstrong numbers under 1000 in C language

#include<stdio.h>
int main()
{
	int x,r,num,sum;
	printf("Armstrong numbers are\n");
	// forloop for printing armstrong number
	for(num=1;num<=1000;num++){
		sum=0;
		x=num;
		while(x!=0){       // calculate cube for every digit in a number
			r=x%10;
			sum=sum+r*r*r;
			x=x/10;
		}
		if(sum==num)
		 printf("%d\n",num);

	}
}
