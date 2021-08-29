#include<stdio.h>
int main(){
	int n=1001,x=1,j=1;
	int k=n;
	while(k!=0){
		x*=k%10;
		k=k/100;
	}
	n=n/10;
	while(n!=0){
		j*=n%10;
		n=n/100;
	}
	if(j==x){
		printf("equal");
	}
	else
	printf("no");
}
