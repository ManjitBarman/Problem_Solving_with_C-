#include<stdio.h>

int main(){
	int x,remainder;
	printf("Enter a number : ");
	scanf("%d",&x);
	printf("\nThe reverse number is: ");
	while(x!=0){
		remainder=x%10;
		printf("%d",remainder);
		x=x/10;
	}

}
