#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
void display(struct node*head){
	struct node* p;
	p=head;
	while(p!=NULL){
		printf("\n%d\n",p->data);
		p=p->next;
	}
}
struct node*deletea (struct node*head,int value){
	struct node*p;
	p=head;
	while(p!=NULL){
		if(p->next->data==value){
			p->next=p->next->next;
				return head;
		}
		p=p->next;
	}
	return head;
}
struct node* insert_ascen(struct node*head,int value){
	struct node*p;
	p=head;
	if(head->data>value){
		struct node* r=(struct node*)malloc(sizeof(struct node));
		r->data=value;
		r->next=head;
		return r;
	}
	
	while(p!=NULL){
		if(p->next->data>value){
		struct node* r=(struct node*)malloc(sizeof(struct node));
		r->data=value;
		r->next=p->next;
		p->next=r;
		return head;
	}
	p=p->next;
	};
}
int main(){
	int n,i;
	scanf("%d",&n);
	struct node *p,*prev,*head;
	head=NULL;
	for(i=0;i<n;i++){
		p=(struct node*)malloc(sizeof(struct node));
	    scanf("%d",&p->data);
	    p->next=NULL;
	    if(head==NULL){
	    	head=p;
		}
	    else prev->next=p;
	    prev=p;
	}
//head =	insert_ascen(head,4);
head = deletea(head,8);
	display (head);
	
	
}
