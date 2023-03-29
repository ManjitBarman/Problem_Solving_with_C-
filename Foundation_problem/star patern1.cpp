//printing star patern 1
#include<iostream>

using namespace std;

void paypart(int n){
	int i,j;
	//outer forloop to handle number of rows
	for(i=0;i<n;i++){
		//inner loop to handle number of columns
		for(j=0;j<=i;j++){
			cout<<" * ";
		}
		cout<<endl;
	}
}

int main(){
	int n=5;
	paypart(n);
	return 0;
}

