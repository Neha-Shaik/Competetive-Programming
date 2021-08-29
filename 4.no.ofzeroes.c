#include<stdio.h>
int count=0;
int zeros(int num){
	if(num==0)
	return count;
	if(num%10==0)
	count++;
	zeros(num/10);
}
int main(){
	int num=70001;
	printf("No.of zeroes in the number are : %d",zeros(num));
    
}
