//print n natural number in reverse order
#include<stdio.h>
int main(){
	int i=1;
	int n;
	printf("Enter how many natural number to print in reverse order: ");
	scanf("%d",&n); 
	/*for(i=1;i<=10;i++){
		printf(" %d",11-i);
	}*/
	while(i<=n){
		printf(" %d",n+1-i);
		i++;
	}
}
