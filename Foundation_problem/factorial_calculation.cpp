// factorial of a number
#include<iostream>
using namespace std;

int factorial(int x)
{
	if(x==1||x==0)
	return 1;
	else
	{
		return x*factorial(x-1);
	}
}

int main()
{
  int a;	
  cout<<"Enter any number to calculate factorial: ";
  cin>>a;
  cout<< "\nthe factorial value of" << a <<" is"<<factorial(a);
 } 
