/*Check Case
Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
1, if the character is an uppercase alphabet (A - Z)
0, if the character is a lowercase alphabet (a - z)
-1, if the character is not an alphabet  */

#include<iostream>
#include<stdio.h>

using namespace std;

int check_char(char ch)
{
	if(ch>='A'&& ch<='Z')
	cout<<"\noutput: 1";
	else if(ch>='a'&& ch<='z')
	cout<<"\noutput: 0";
	else
	cout<<"\noutput: -1";
}

int main()
{   char character;
	cout<<"Enter a any character : ";
	cin>>character;
	
	check_char(character);
	
	return 0;
}
