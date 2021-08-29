#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;          
    struct node *next; 
}*head;

void func(struct node* head){
    int even = 0, odd = 0;
    struct node* p = head;
    if(head == NULL){
        printf("#Even:%d, #Odd:%d", even, odd);
        return ;
    }

    while(p != NULL){
        if(p->data%2 == 0) even++;
        else odd++;
        p = p->next;
    }
    printf("#Even:%d, #Odd:%d", even, odd);
}

void createList(int n) {
    struct node * newNode, * temp;
    int data, i;

    head = (struct node * ) malloc(sizeof(struct node));

    if (head == NULL) {
        printf("Unable to allocate memory.");
        exit(0);
    }
    // printf("Enter the data of node 1: ");
    printf("Enter the nodes on by one: ");
    scanf("%d", & data);

    head -> data = data;
    head -> next = NULL;
    temp = head;
    for (i = 2; i <= n; i++) {
        newNode = (struct node * ) malloc(sizeof(struct node));
        if (newNode == NULL) {
            printf("Unable to allocate memory.");
            break;
        }
        // printf("Enter the data of node %d: ", i);
        scanf("%d", & data);

        newNode -> data = data;
        newNode -> next = NULL;

        temp -> next = newNode;
        temp = temp -> next;
    }
}

void print(struct node* head){
    if(head == NULL) return ;
    struct node *p = head;
    while(p != NULL){
        printf("%d->",p->data);
        p = p->next;
    }
}

int main() {
    int n;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    func(head);
    // print(head);
}
