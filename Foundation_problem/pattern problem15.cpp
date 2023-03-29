/*
A B C D E 
A B C D
A B C 
A B 
A 
*/


#include<stdio.h>

int main(){
	int i,j,row;
	printf("Enter the number of row: ");
	scanf("%d",&row);
    
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%c",64+j);
			  //%c for print character based on corresponding ASCII value
		}
		printf("\n");
	}
}
