// patern problem  using recursion
#include<stdio.h>
void printPattern(int n); // function prototype 

int main()
 {
 	int n=5;
 	printPattern(n);
 	return 0;
 }
 // for n=3
 //*
 //***
 //*****
 void printPattern(int n){
 	int i;
 	if(n==1){
 		printf("*\n");
 		return;
	 }
	else{
		printPattern(n-1);  //number of lines
 	for(i=0;i<(2*n-1);i++){  // 2n-1 for logic to print star
 		printf("*");
	 }
	// printf("\n");
	}
 	
 }
   
