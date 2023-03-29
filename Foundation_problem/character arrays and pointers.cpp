#include<stdio.h>

void print(char* c) // char* c or char* c its same
{
	int i=0;
	while(*c != '\0') // *c or c[i] its same 
	{
		printf("%c",c[i]);
		c++;
	}
	printf("\n");
}
int main()
{
	char c[20]="HELLO";
	print(c);
}
