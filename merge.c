#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
 

struct Node
{
    int data;
    struct Node* next;
};
 

void MoveNode(struct Node** destRef, struct Node** sourceRef);
 
struct Node* SortedMerge(struct Node* a, struct Node* b)
{
    struct Node dummy;
    struct Node* tail = &dummy;
 
    
    dummy.next = NULL;
    while (1)
    {
        if (a == NULL)
        {
            tail->next = b;
            break;
        }
        else if (b == NULL)
        {
            tail->next = a;
            break;
        }
        if (a->data <= b->data)
            MoveNode(&(tail->next), &a);
        else
            MoveNode(&(tail->next), &b);
 
        tail = tail->next;
    }
    return(dummy.next);
}
 

void MoveNode(struct Node** destRef, struct Node** sourceRef)
{
    
    struct Node* newNode = *sourceRef;
    assert(newNode != NULL);
 
    
    *sourceRef = newNode->next;
 
    
    newNode->next = *destRef;
 
   
    *destRef = newNode;
}
 
 
/* Function to insert a node at the beginging of the
   linked list */
void push(struct Node** head_ref, int new_data)
{
    
    struct Node* new_node =
        (struct Node*) malloc(sizeof(struct Node));
 
   
    new_node->data  = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
 
/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node!=NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}
 
/* Drier program to test above functions*/
int main()
{
    /* Start with the empty list */
    struct Node* res = NULL;
    struct Node* a = NULL;
    struct Node* b = NULL;
 
    /* Let us create two sorted linked lists to test
      the functions
       Created lists, a: 5->10->15,  b: 2->3->20 */
    push(&a, 34);
    push(&a, 7);
    push(&a, 6);
 
    push(&b, 20);
    push(&b, 3);
    push(&b, 2);
 
    /* Remove duplicates from linked list */
    res = SortedMerge(a, b);
 
    printf("Merged Linked List is: \n");
    printList(res);
 
    return 0;
}
