#include<stdio.h>
# define size 4
int front=-1,rear=-1;
int a[size];
int is_empty(){
	if(rear==-1&&front==-1){
		return 1;
	}
	else return 0;
}
int is_full(){
	if(rear==size-1){
		return 1;
	}
	return 0;
} 
void enqueue(int x){
 	if(is_full()){
 		printf("queue is full\n");
 		return;
	 }
	else if(rear==-1&&front==-1){
		front=rear=0;
	}	
	else rear++;
	a[rear]=x;
}
void dequeue(){
	if (is_empty()){
		printf("queue is empty\n");
		return;
	}
	else if(front==0&&rear==0){
		front =rear=-1;
	}
	else
		front++;
}
void display(){
	int i=0;
	if(front==-1)
		return;
	for(i=front;i<=rear;i++){
		printf("%d\n",a[i]);
	}
}
int main(){
 	enqueue(12);
 	enqueue(4);
 	dequeue();
 	enqueue(6);
 	enqueue(98);
 	enqueue(10);
 	dequeue();
 	dequeue();
 	display();
 }
