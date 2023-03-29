/*
1 
2 3 
4 5 6
7 8 9 10
11 12 13 14 15 */

#include<stdio.h>
int main(){
	int i,j,row,num=1;
	printf("Enter the number of row: ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){    // j value changiing so j<=i 
			printf(" %d",num);
			num++;
		}
		printf("\n\n");
	}
}
