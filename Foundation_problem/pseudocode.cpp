#include<iostream>
using namespace std;
int main(){
	int p = 1, q = 1, r, s;
	for(r = 0 ; r <= 2; r++){
		for(s = -4; s <= -2; s++){
			p = p + 2; 
			if(p > r)
			 continue; 	
			p = 1;
			if(p > s)
			 break;
		}
	}
	cout<< p + q;
}
