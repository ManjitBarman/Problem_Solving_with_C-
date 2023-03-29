//program to calculate sum of first natural numbers 

#include<stdio.h>

int main(){
	int term,i,sum=0;
	printf("Enter the N term of natural number: ");
	scanf("%d",&term);
	
	for(i=1;i<=term;i++){
		sum=sum+i;
		
	}
	printf("\nSum of first %dth natural numbers is: %d",term,sum);

}
