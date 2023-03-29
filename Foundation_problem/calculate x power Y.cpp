//Calculate x power y

#include<stdio.h>
int main()
{
	int i,x,y,result=1;
	printf("Enter a number and its power\n");
	scanf("%d%d",&x,&y);
	for(i=1;i<=y;i++){   // loop runs y times 
		result=result*x;
	}
	printf("\n%d to the power%d is :%d",x,y,result);

}
