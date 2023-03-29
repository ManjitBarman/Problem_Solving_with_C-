#include<iostream>
using namespace std;

struct Node{
	int value;
	Node * next;
};
class temp{
	private : 
	int value;
	Node * data;
	public :
		temp(int val){
			value = val;
		}
		
	void insert(int n){
		Node * node = new Node;
		node -> value = n;
		if(!data)
		data = node;
		else{
			data -> next = node;
			data = node;
		}
	}	
};
int main(){
	int n;
	cin>>n;
	temp t1(n);	
}