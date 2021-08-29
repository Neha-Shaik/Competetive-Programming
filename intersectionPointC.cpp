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
	if(head == NULL) return;
	while(head!=NULL){
		printf("%d ", head->data);
		head = head->next;
	}
}


int intersectPoint(Node * head1, Node * head2) {
	Node* ptr1= head1;
	Node* ptr2 = head2;
	Node* temp;
	Node* ptr1_i;
	while(ptr1!=NULL){
		ptr2 = head2;
		while(ptr2!=NULL){
			if(ptr1->data == ptr2->data){
				temp = ptr2; ptr1_i = ptr1;
				while(ptr1_i!= NULL && ptr2!=NULL){
					if(ptr1_i->data == ptr2->data){
						ptr1_i = ptr1_i->next;
						ptr2 = ptr2->next;
					} else {
						break;
					}
				}
				if(ptr1_i == NULL && ptr2 == NULL)
					return temp->data;	
			}
			ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
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
    int n1, n2, n3;

    scanf("%d%d", & n1, & n2);
    Node * head1 = inputList(n1);
    Node * head2 = inputList(n2);
    
    printf("intersection point is %d\n", intersectPoint(head1, head2));
    return 0;

}
