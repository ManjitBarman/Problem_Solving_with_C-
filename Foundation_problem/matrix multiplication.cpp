// multiplication of two matrix

#include<stdio.h>

int main(){
	int A[3][3],B[3][3],C[3][3],i,j,k,sum;
	printf("Enter 9 numbers for 1st matrix: ");   
	for(i=0;i<=2;i++){       // take input from 1st matrix
		for(j=0;j<=2;j++){
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("Enter 9 numbers for 2nd matrix: ");
	for(i=0;i<=2;i++){       // take input from 2nd matrix
		for(j=0;j<=2;j++)
		scanf("%d",&B[i][j]);
	}
	
	// calculation and print matrix
	printf("product of two matrix is : \n");
	for(i=0;i<=2;i++){
		for(j=0;i<=2;i++){
			for(k=0;k<=2;k++){        //add 3 time after multiplication --- k value is increase every time.
			sum=0;
			sum=sum+A[i][k]*B[k][j]; // logic for multiplication
			C[i][j]=sum;
			printf("%d  ",C[i][j]);
			}
			printf("\n");
		}
		
	}
}
	

