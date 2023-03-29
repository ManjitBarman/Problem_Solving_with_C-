/*
6 5 4 3 2 1
6 5 4 3 2
6 5 4 3
6 5 4 
6 5
6*/

#include<iostream>
using namespace std;

int main()
{   

    int i,j;
    for(i=1;i<=6;i++){   // 6 is the number of rows 
    	for(j=6;j>=i;j--){   // printing can be done by inner forloop .
    		printf(" %d",j);
    		//i++;
		}
		printf("\n");
	} 
	
}


/*
	int i, j, rows;
	printf("enter no of rows");
	scanf("%d", &rows);
	for(i = 1; i <= rows; i++){
		for(j = rows; j >= i; j--){
			printf("%d ", j);
		}
		printf("\n");
	}*/
