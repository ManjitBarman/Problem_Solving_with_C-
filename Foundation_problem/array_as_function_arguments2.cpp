//Array as functinon arguments

#include<stdio.h>

int Double(int A[],int size)//int*A or int A[ ].....its same by compiler
{
	int i,sum=0;   
	for(i=0;i<size;i++)
	{
		A[i]=2*A[i];
	}
	return A[i];
}

int main()
{
	int A[]={1,2,3,4,5,6,6,7};
	int size= sizeof(A)/sizeof(A[0]); //calcutae the number of elements in arya
	Double(A,size); // send adress of arra
	int i;
	for(i=0;i<size;i++)
	printf("%d ",A[i]);

}
