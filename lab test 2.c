#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node* head=NULL;
struct node* create_list(int n){
	int i=0;
	struct node*p,*prev;
	for(i=0;i<n;i++){
		p=(struct node*)malloc(sizeof(struct node));
		scanf("%d",p->data);
		p->next =NULL;
		if(head==NULL){
			head=p;
		}
		else prev->next =p;
		prev=p;
	}
	return head;
	
}
int freq_even(struct node*head){
	struct node*p;
	p=head;
	int count =0;
	while(p!=NULL){
		if(p->data%2==0)
		   count ++;
	    p=p->next;
	}
	return count;
}
int freq_odd(struct node*head){
	struct node*p;
	p=head;
	int count=0;
	while(p!=NULL){
		if(p->data%2==0)
		count ++;
	}
	return count;
}
int main(){
	int n;
	printf("No.of numbers in the list");
	scanf("%d",&n);
	printf("Enter the elements");
	head=create_list(n);
	printf("#Even=%d\n",freq_even(head));
	printf("#odd=%d\n",freq_odd(head));
	
}
