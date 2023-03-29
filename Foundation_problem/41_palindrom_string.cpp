//Check a string is palindrom or not 
#include<iostream>
#include <string.h>

using namespace std;


int main(){
	char str[10];
	int i,length;
	int count=0;
 cout<<"Enter a sring : ";
 cin>>str;	
 // check the 1st index value and last index value is same or not 
 length= strlen(str);
 for(i=0;i<length;i++){
 	if(str[i]!=str[length-i-1]){
 		count=1;
	 }
 }
 
 if(count)
 cout<<"\nIt is not a palindrom string";
 else
 cout<<"\nIt is a palindrom string";
}
