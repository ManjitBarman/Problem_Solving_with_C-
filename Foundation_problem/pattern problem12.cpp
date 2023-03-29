
/* 
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    * 

*/  

#include<stdio.h>

int main(){
	
	int i,j,row,space;
	printf("Enter number of row: ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++){   // handle number of rows
		for(space=1;space<=(row-i);space++){    // printing space
				printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){  // print star
        	printf("*");
		}
		printf("\n\n");

	}
	//for 2nd pyramid
	for(i=row-1;i>=1;i--){
		for(space=1;space<=(row-i);space++){
				printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
        	printf("*");
		}
		printf("\n\n");
    }
}
