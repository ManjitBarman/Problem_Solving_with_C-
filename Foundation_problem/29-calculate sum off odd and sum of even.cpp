//Program to calculate sum of all even and odd numbers in C
#include<stdio.h>

int main(){
   
   //printf("Enter how numbers are you enter:");
   //scanf("%d",num);
   
   int array[10],i,odd=0,even=0,value;
   printf("Enter 10 numbers:");
   for(i=0;i<10;i++){
   	scanf("%d",&array[i]);
   }
   // logic
   for(i=0;i<10;i++){
   	if(array[i]%2==0){
   		even=even+array[i];
   		}
   	else
   	{
   	    odd=odd+array[i];
	   }
   }   
   printf("\nSum of even numbers:%d",even);	
   
   
   printf("\nSum of odd numbers:%d",odd);	
}
