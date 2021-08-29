#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node* head;
void  create_list(int n){
	int i=0;
	head=NULL;
	struct node*p,*prev;
	for(i=0;i<n;i++){
		p=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->next =NULL;
		if(head==NULL){
			head=p;
		}
		else prev->next =p;
		prev=p;
	}
	
}
int freq_even(struct node*head){
	struct node*p;
	p=head;
	int count =0;
	while(p!=NULL){
		if((p->data)%2==0)
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
		if((p->data)%2==1)
		count ++;
		p=p->next;
	}
	return count;
}
void display(struct node * r) {
    struct node * p = r;
        while (p != NULL) {
            printf("%d, ", p -> data);
            p = p -> next;
        }
}
int main(){
	int n;
	printf("Enter the total no.of nodes : ");
	scanf("%d",&n);
	printf("Enter the nodes one by one \n");
	create_list(n);
//	display(head);
	printf("#Even= %d\n",freq_even(head));
	printf("#odd = %d\n",freq_odd(head));
	
}
