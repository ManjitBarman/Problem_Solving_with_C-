#include<stdio.h>
#include<iostream>

int Add(int a,int b)
{
	return a+b;
}

int main()
{
	int c;
	int (*p)(int,int);
	p=&Add; // only function name will return us pointer
	c=(*p)(2,3); // de refernencing and executing the function
	printf("%d",c);
}   
