#include<stdio.h>

#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* front=NULL,*rear=NULL;
void enqueue(int x){
	struct node*p=(struct node*)malloc(sizeof(struct node));
	p->data=x;
	p->next=NULL;
	if(front==NULL&&rear==NULL){
		front=rear=p;
		return;
	}
	rear->next=p;
	rear=p;
	return;
	
}
void dequeue(){
	struct node* p;
	if (front==NULL){
		printf("stack is empty");
	}
	if(front==rear){
		front=rear=NULL;
		return;
	}
	p=front;
	front=front->next;
	int t=p->data;
	free(p);
	return ;
}
void display(){
	struct node*p;
	p=front;
	if(front==NULL){
		printf("queue is empty\n");
		return;
	}
	while(p!=NULL){
		printf("%d\n",p->data);
		p=p->next;
	}
}
int main(){
	enqueue(12);
	enqueue(8);
	dequeue();
	enqueue(0);
		enqueue(1);
//	enqueue(11);
	dequeue();
	display();
}
