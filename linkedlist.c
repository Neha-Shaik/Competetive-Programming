#include<stdio.h>

#include<stdlib.h>

struct node {
    int data;
    struct node * next;
};
void display(struct node * head) {
    struct node * p = head;
    while (p != NULL) {
        printf("%d ", p -> data);
        p = p -> next;

    }
}

struct node * search(struct node * head, int value) {
    struct node * p=NULL;
    p = head;
    while (p != NULL) {
        if (p -> data == value)
            return p;
        p = p -> next;
    }
//    printf("searched p:%d",p->data);
    return p;
}
struct node* insert(struct node * head, int value) {
    struct node * p;
    p=(struct node*)malloc(sizeof(struct node));
    p -> data = value;
    p -> next = head;
    return p;
    printf("%d \n",head->data);
}
void insert_end(struct node * head, int value) {
    struct node * p = head;
    while (p->next != NULL) {
    	p = p->next;
	}
    
        struct node * k = (struct node * ) malloc(sizeof(struct node));
        k -> data = value;
        k -> next = NULL;
        p -> next = k;
    
}
int main() {
    struct node * p, * prev, * head;
    int n, i;
    printf("Enter n value: ");
    scanf("%d", & n);
    printf("enter the elements\n");
    head = NULL;

    for (i = 0; i < n; i++) {
        p = (struct node * ) malloc(sizeof(struct node));
        scanf("%d", & p -> data);
        p -> next = NULL;
        if (head == NULL) {
            head = p;
        } else prev -> next = p;
        prev = p;
    }
    struct node * check = search(head, 3);
    if (check == NULL) {
        printf("NOT present\n");
    } else printf("It is present ");
    head=insert(head, 4);
    
    insert_end(head, 9);
    display(head);
    return 0;
}
