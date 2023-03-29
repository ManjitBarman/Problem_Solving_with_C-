// search a value in a given array or not

#include<iostream>

using namespace std;

int main(){
	int arr[10]={5,2,3,3,4,5,6,7,8,9,};
	int element;
	
	cout<<"Enter a element to search: ";
	cin>>element;
	
	for(i=0;i<10;i++){
		if(arr[i]==element){
			cout<<"search elemnt: "<< element<< "is available in arry";
		}
		else{
				cout<<"search elemnt is t match: "<<element;
		}
	}
}
