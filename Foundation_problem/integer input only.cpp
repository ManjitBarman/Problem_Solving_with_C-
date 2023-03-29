//write a program which allows integer input only..

#include<stdio.h>

int getIntegerOnly()
{
	int num=0,ch;
	do{
		ch=getch();  // take input through getch()
		if(ch>=48&&ch<57) // ascii code of 0=48 and 9=57
		{
			printf( "%c",ch);
			num=num*10+(ch-48);
		}
	
if (ch==13)
break;
	  
}while(1);
return(num);
}
int main()
{
	int x=0;
	x=getIntegerOnly();
	printf("\nYou are entered %d",x);
	getch();
}
