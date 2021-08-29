#include<stdio.h>
void swap(int* p,int* q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int main(){
	int x,y;
	printf("Enter the numbers: ");
	scanf("%d",&x);
	scanf("%d",&y);
	printf("Before swapping x=%d, y=%d\n",x,y);
	swap(&x,&y);
	printf("After the swapping x=%d, y=%d",x,y);
	return 0;
	
}
