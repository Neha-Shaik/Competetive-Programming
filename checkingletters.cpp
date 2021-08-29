#include<stdio.h>
int main(){
	char a[]={'a','e','u','t','b','m'};
	char b[100];
	int i,j;
	for(i=0;i<100;i++){
		scanf("%c",&b[i]);
	    if(b[i]=='\n')
	      break;
	}


	int count=i,temp=0;
	
	for(i=0;i<6;i++){
		for(j=0;j<count;j++)
		   if(b[j]==a[i]){
		   	temp++;
		   	
		   	break;
		   	
		   }
				
	}
	if(temp==count)
		printf("can be made");
	else printf("no");
}
