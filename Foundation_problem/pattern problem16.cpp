/*
A
B B 
C C C
D D D D
E E E E E 

*/


#include<stdio.h>

int main(){
	int i,j,row;
	printf("Enter the number of row: ");
	scanf("%d",&row);
    
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%c",64+i);  //%c for print character based on corresponding ASCII value
		}
		printf("\n");
	}
}
