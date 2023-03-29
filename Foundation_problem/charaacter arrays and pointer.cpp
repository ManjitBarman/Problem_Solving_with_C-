//character arrays and pointers
#include<stdio.h>
#include<string.h>

int main()
{
	char c[]="JOHN";  //string litrels  and null caracter include implicitly
	//  char c[5]={'J','O','H','N','\0' };
	printf("size in bytes = %d\n",sizeof(c));
	int len=strlen(c);
	printf("Length =%d\n",len);
	//printf("Length =%s\n",c);


	
}
