#include<stdio.h>
#include<math.h>

struct Node {
    int data;
    struct Node * next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printLinkedList(Node* head){
	printf("Merged List : ");
	if(head == NULL) return;
	while(head!=NULL){
		printf("%d", head->data);
		if(head->next!=NULL) printf("->");
		head = head->next;
	}
}

//Node* mergeList(Node* head1, Node* head2){
//	Node *ptr1 = head1, *ptr2 = head2;
//	Node *newHead = NULL, *temp, *newData;
//	while(ptr1!=NULL && ptr2!=NULL){
//		if(newHead == NULL){
//			
//			newData->next = NULL;
//			printf("Inside stting up head");
//			if(ptr1->data < ptr2->data){
//				newData->data = ptr1->data;
//				ptr1 = ptr1->next;
//			} else{
//				newData->data = ptr2->data;
//				ptr2 = ptr2->next;
//				printf("\nFinished the head: ");
//			}
//			newHead = newData;
//			temp = newHead;
//			printf("%d",newHead->data);
//		} else {
//			printf("Inside else part");
//			Node* newData2;
//			newData2->next = NULL;
//			if(ptr1->data < ptr2->data){
//				newData2->data = ptr1->data; 
//				ptr1 = ptr1->next;
//			} else {
//				newData2->data = ptr2->data;
//				ptr2 = ptr2->next;
//			}
//			temp->next = newData2;
//			temp = temp->next;
//			printf("Data: %d\n", newData2->data);
//		}
//	}
//	if(ptr1!=NULL){
//		while(ptr1!=NULL){
//			newData->data = ptr1->data;
//			newData->next = NULL; 
//			ptr1 = ptr1->next;
//		}
//	}
//	if(ptr2 != NULL){
//		while(ptr2 != NULL){
//			newData->data = ptr2->data;
//			newData->next = NULL; 
//			
//			ptr2 = ptr2->next;
//		}
//	}
//	temp->next = NULL;
//	return newHead;
//}

Node* mergeList(Node* head1, Node* head2){
	if(head1 == NULL)
		return head2;
	if(head2 == NULL)
		return head1;
	Node* newHead;
	if(head1->data < head2->data){
		newHead = head1;
		newHead->next = mergeList(head1->next, head2);
	} else {
		newHead = head2;
		newHead->next = mergeList(head1, head2->next);
	}
	return newHead;
}


Node * inputList(int size) {
    if (size == 0) return NULL;

    int val;
    scanf("%d", & val);

    Node * head = new Node(val);
    Node * tail = head;

    for (int i = 0; i < size - 1; i++) {
        scanf("%d", & val);
        tail -> next = new Node(val);
        tail = tail -> next;
    }

    return head;
}

int main() {
    int n1, n2;

    scanf("%d%d", & n1, & n2);
    Node * head1 = inputList(n1);
    Node * head2 = inputList(n2);
    
//	printLinkedList(head1);
//	printf("\n");
//	printLinkedList(head2);
	Node* head3 = mergeList(head1, head2);
    printLinkedList(head3);
    return 0;

}
