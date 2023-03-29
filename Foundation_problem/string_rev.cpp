// string reverse using predefined function 

#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
	char s[20];
	printf("Enter a string: ");
	gets(s);
	strrev(s);
	printf("The reverse string is: %s",s);
}   
