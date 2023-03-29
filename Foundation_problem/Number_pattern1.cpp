/*#problem 3
Number Pattern 1

Print the following pattern
Pattern for N = 4
1
23
345
4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input 1 :
3
Sample Output 1 :
1
23
345*/

#include<iostream>
#include<stdio.h>

using namespace std;



int main()
{
	int i,j,N;
	cout<<"Enter number of rows: ";
	cin>>N;
	
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i+j-1;
		}
		cout<<"\n";
	}
	
	return 0;
}
