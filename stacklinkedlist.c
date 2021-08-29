#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node* top=NULL;
void push(int n){
	struct node*p;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=n;
	p->next=top;
	top=p;
	return ;
}
int  pop(){
	if (top==NULL){
		printf("Stack is empty");
		return;
	}
	int t;
	struct node*p;
	t=top->data;
	p=top;
	top=top->next;
	free(p);
	return t;
	
}
int  is_empty(){
	if (top==NULL){
		printf("Stack is empty");
		return 1;
	}
	return 0;
}
void display(){
	struct node*p;
	p=top;
	printf("Now The numbers in the stack are\n");
	while(p!=NULL){
		printf("%d\n",p->data);
		p=p->next;
	}
}
int main(){
	push(2);
	push(5);
	push(7);
	push(77);
	push(32);
	printf("%d is popped\n",pop());
	display();	
	
}
