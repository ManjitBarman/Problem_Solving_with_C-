#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int a=2,b,i,min,N;
	cout<<"How many co-prime numbers you want to print : ";
	cin>>N;
	
	while(N){
	// check the numbers are co prime or not 	
	 for(b=2;b<=a;b++){
	 	
	    min=a<b?a:b;
	 	for(i=2;i<=min;i++){
	 		if(a%i==0 && b%i==0){
	 			break;
			 }
			 
			if(i==min+1){
			cout<<a << b<<endl;    // print co prime numbers
			N--;
			if(N==0)
			  exit(0);
			}
		 }
	
	 }
	 a++;
	 
	}
    

}
