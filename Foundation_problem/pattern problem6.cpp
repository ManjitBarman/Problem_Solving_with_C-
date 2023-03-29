/*
    *
   **
  ***
 ****
*****
*/
#include<stdio.h> 

int main(){
	int i,j,row;
	printf("Enter the number of row: ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++){
		for(j=1;j<=row;j++){
			if((i+j)<=row)   // main condition
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
}
