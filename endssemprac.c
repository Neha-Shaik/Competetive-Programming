#include<stdio.h>
void swap(int *p,int *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int main(){
	int a=3,b=4;
	printf("%d %d\n",a,b);
	swap(&a,&b);
	printf("%d %d",a,b);
}
