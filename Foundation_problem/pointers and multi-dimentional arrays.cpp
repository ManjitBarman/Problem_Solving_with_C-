
#include<stdio.h>
//#include<string.h>

void Fun(int *A ) // (*A or A[] its same) Argument:1-D array of integers  
{
	
}

int main()
{
	int c[3][2][2]={{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};
	printf("%d %d %d %d",c,*c,c[0],&c[0][0]);
	
	int A[]={1 ,2}; //
	int B[2][3]={{2,4,6},{5,7,8}};// B returns int (*)[3]
	Fun(A);//A returns int*
}
