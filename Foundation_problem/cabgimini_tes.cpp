#include<iostream>

using namespace std;

int fun(int a,int b){
	if(a>0)
	if(b>0)
	return a+b+fun(a+1,0)+fun(a+2,0)+fun(a+3,0);
	
	return a+b;
		
	}
int main(){
	int a=2,b=6;
	fun(a,b);
}
