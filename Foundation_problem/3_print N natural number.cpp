// print N natural number 


#include<stdio.h>

void printNaturalNumbers( int n){
	int i;
	for(i=1;i<=n;i++){
		printf(" %d",i);
	}
}
int main(){
	int n;
	printf("Enter how many natural number to print: ");
	scanf("%d",&n);
	printNaturalNumbers(n);
	return 0;
}
