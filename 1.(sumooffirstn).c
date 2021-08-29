#include<stdio.h>
int sum=0;
int sumn(int n){
	if(n==0)
	return sum;
	sum+=n--;
	sumn(n);
}
int main(){
	int n,sum;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	sum=sumn(n);
	printf("sum of first n natural numbers: %d",sum);
}
