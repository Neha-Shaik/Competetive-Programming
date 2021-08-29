#include<stdio.h>
int main(){
	int n,s[n],k;
	printf("Enter the length of string ");
	scanf("%d",&n);
	printf("Enter the string: ");
	for(int i=0;i<n;i++){
		scanf("%c",&s);
	}
     int i=0;
     k=n-1;
	 while(i<n && k>0){
	    if (s[i]==s[k]){
	      i++;
	      k--;}
	    else 
	     break;
		  }
		if(i==n){
			printf("its a palindrome");
				}
	    else 
	     printf("It is not a palindrome");
	    
	      
	  
}
