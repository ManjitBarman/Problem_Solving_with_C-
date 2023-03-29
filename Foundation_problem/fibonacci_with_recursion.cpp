// fibonaccci series using recursionin
#include<iostream>
using namespace std;

int fib(int m)
{
	if(m==1||m==2)
	return(1);
	else
	return(fib(m-1)+fib(m-2));
}

int main()
{
	int fib(int);
	int i,n;
	cout<<"Enter how many terms of fibonacci series you want: ";
	cin>>n;
	for(i=1;i<=n;i++)
	 cout<< fib(i);
}
