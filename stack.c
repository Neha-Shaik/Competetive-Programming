#include<stdio.h>
#define size 7
int a[size],top=-1;
void push(int n){
	if(top==size -1){ 
	printf("stack over flow\n");
    exit(0);
	}
	top=top+1;
	a[top]=n;
}
int  pop(){
	if (top==-1){
		printf("stack under flow");
		return 1;
	}
	int t;
	t=a[top];
	a[top]=0;
	top=top-1;
	return t;
}
void display(){
	int i;
	printf("The numbers in the stack are:\n");
	for(i=0;i<=top;i++)
	printf("%d\n",a[i]);
}
int main(){
	push(2);
	push(5);
	push(7);
	push(77);
	push(32);
	int x=pop();
	display();	
	printf("\n\n%d i am popped\n",x);
}
