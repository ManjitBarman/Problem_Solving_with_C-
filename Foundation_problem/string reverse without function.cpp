 #include<stdio.h>
 int main()
 {
 	char s[20],ch;
 	int i,l;
 	printf("Enter a string to reverse: ");
 	gets(s);
 	for(l=0;s[l];l++);  // for calculating length ,we can use strlen function also
 	//printf("length %d ",l);
 	for(i=0;i<l/2;i++){
 		ch=s[i];
 		s[i]=s[l-1-i];
 		s[l-1-i]=ch;
	 }
	 printf("Reverse string is %s",s);
 }  
 
