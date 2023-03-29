//charcter array and pointers 
#include<stdio.h>
#include<string.h>

void print(char *c)
{
	c[0]='A';
	while(*c!='\0')
	{
		printf("%c",*c);
		c++;
	}
	printf("\n");
}

int main()
{
	char c[20]= "HELLO"; //string getsstored in the space for array
	//char *c= "HELLO"; //string gets stored as compile time cnstant 
	//c[0]='a'; // this is not valid 
	print(c);
}
