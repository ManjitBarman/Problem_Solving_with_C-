#include<iostream>

using namespace std;

int isPalindrom(int num){
	int original_num=num;
	int reversed = 0;
     // reverse the number
     while(num !=0){
     	
     	reversed=reversed*10+ num%10;
     	num=num/10;
     	}
     	
     	//cout<<reversed<<"and"<<num;  // here num will num=0 afetr the while loop so we need to preserve the num into a variable
     	
    if(original_num==reversed){
    	return 1;
	}
	else
	{
		return 0; 
	}
		
}

int main()
{
	int number;
	cout<<"Enter a nuber to check palindrom: ";
	cin>>number;
	
	if(isPalindrom(number)){
		cout<<"\n It is a palin drom";
    }
	else{
		cout<<"\nIt is not palindrom number";
	}
	
}
