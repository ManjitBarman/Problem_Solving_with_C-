#include<iostream>
#include<stdio.h>

using namespace std;

int fibonacci(int n)
{
	int num=n,i=0;
    int n1=0,n2=1,sum=0;
	
	for(i=0;i<num;i++)
	{
		sum=n1+n2;
		cout<<sum<<" ";
		n1=n2;
		n2=sum;
	}

}

int main()
{    int number,i;
	cout<<"enter the fibonacci series term: ";
	cin>>number;
	if(number<1)
	cout<<"\nEnter another higher fibonacci term";
	else{
	
	cout<<"\nFiboncci series is : ";
	//cout<<"\n 0 "<<" 1 ";
	fibonacci(number);
}

	return 0;
}
