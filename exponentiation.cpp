#include<stdio.h>
long int product =1;
int exponential(int num,int pow){
	if(pow==0)
	return product;
	product*=num;
	pow--;
	exponential(num,pow);
}
int main(){
	int num,pow;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("Enter the exponential: ");
	scanf("%d",&pow);
	printf("Answer is %ld",exponential(num,pow));
}
