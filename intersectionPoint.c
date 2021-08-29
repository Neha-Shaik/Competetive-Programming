#include<stdio.h>

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
    	data = x;
    	next = NULL;
  	}
};

int intersectPoint(Node* head1, Node* head2)
{
   
    printf("getting the input done");
    return 0;
}

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    printf("%d",&val);
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        printf("%d",&val);
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

int main()
{
    int n1,n2,n3;

        cin>>n1>>n2>>n3;
        scanf("%d%d%d",&n1,&n2,&n3);
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}
