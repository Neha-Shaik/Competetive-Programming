#include<stdio.h>
struct node{
	int data;
	struct node*next;
};
struct node*head=NULL;
struct node* create(){
	struct node*p,*prev;
	int i=0;
	while(i<n){
		p=(struct node*)sizeof(struct node);
		scanf("%d",&p->data);
		p->next=NULL;
		if(head==NULL){
			head=p;
		}
		else prev->next=p;
		prev=p;
		i++;
	}
	
}
