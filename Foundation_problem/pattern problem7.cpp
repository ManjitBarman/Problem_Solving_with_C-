/*
1
2 2 
3 3 3
4 4 4 4 
5 5 5 5 5 */
#include<stdio.h>
int main(){
	int i,j,row;
	printf("Enter the number of row: ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){    // j value changiing so j<=i 
			printf(" %d",i);
		}
		printf("\n");
	}
}
