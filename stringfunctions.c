#include<stdio.h>
int count=0;
int str4len(char a[],int length){
	int i;
	for(i=0;i<length;i++){
		if(a[i]!='\0'){
			count++;
		}
}
	return count;
}
	
int main(){
	char a[]="Neha Shaik";
	int length=sizeof (a);
	printf("Length of the string: %d ",str4len(a,length));
}
