#include<stdio.h>

int main(){
	int i,j,row;
	printf("Enter the number of row: ");
	scanf("%d",&row);
    
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	//for 2nd pyramid
	for(i=row-1;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
}
