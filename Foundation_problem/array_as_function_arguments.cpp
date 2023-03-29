//Array as functinon arguments

#include<stdio.h>

int sumofElements(int A[],int size)//int*A same by compiler
{
	int i,sum=0;   //intialize variable for loop
	//int size= sizeof(A)/sizeof(A[0]); it will give only 4 byt e
	printf("SOE-size of  A= %d, size of A[0]=%d\n",sizeof(A),sizeof(A[0])
	for(i=0;i<size;i++)
	{
		sum+=A[i];
	}
	return sum; 
}
int main()
{
	int A[]={1,2,3,4,5,6,6,7};
	int size= sizeof(A)/sizeof(A[0]); //calcutae the number of elements in arya
	int total=sumofElements(A,size); // send adress of array
	//printf("sum of elements : %d",total);
	printf("SOE-size of  A= %d, size of A[0]=%d\n",sizeof(A),sizeof(A[0]);

}
