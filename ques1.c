#include <stdio.h>
#include <malloc.h>

struct node {
  int data;
  struct node * next;
};
void insert_front(struct node ** list, int data) {
  struct node * a = (struct node * ) malloc(sizeof(struct node));
  a -> next = * list;
  a -> data = data;
  * list = a;
  return;
}
void insert_end(struct node ** list, int Data) {
  struct node * a = (struct node * ) malloc(sizeof(struct node));
  a -> next = NULL;
  a -> data = Data;
  struct node * last = * list;
  if (last == NULL) {
    * list = a;
    return;
  }
  while (last -> next != NULL) {
    last = last -> next;
  }
  last -> next = a;
  return;
}
void insert_i(struct node ** list, int i, int data) {
  struct node * a = (struct node * ) malloc(sizeof(struct node));
  a -> next = NULL;
  a -> data = data;
  struct node * last = * list;
  if (i == 0) {
    * list = a;
    return;
  }
  while (i) {
    last = last -> next;
    i--;
  }
  last -> next = a;
  return;
}
void delete_i(struct node ** list, int i) {
  struct node * last = * list;
  while (i - 1) {
    last = last -> next;
    i--;
  }
  last -> next = (last -> next) -> next;
  return;
}
void display(struct node * list) {
  while (list != NULL) {
    printf("%d ", list -> data);
    list = list -> next;
  }
}
int frequency_element(struct node ** list, int Data) {
  struct node * last = * list;
  int count = 0;
  if (last -> data == Data) {
    count++;
  }
  while (last -> next != NULL) {
    last = last -> next;
    if (last -> data == Data) {
      count++;
    }
  }
  return count;
}
int main() {
  int n,i;
  scanf("%d", & n);
  struct node * list = NULL;
  for (i = 0;i<n;i++) {
    int a;
    scanf("%d", & a);
    insert_end( & list, a);
  }
  printf("\nEnter element number to be deleted = ");
  int x, y;
  scanf("%d", & x);
  delete_i( & list, x);
  printf("Enter element number and data to be inserted = ");
  scanf("%d %d", & x, & y);
  insert_i( & list, x, y);
  printf("Enter element for frequency = ");
  scanf("%d", & x);
  printf("frequency of element = %d\n", frequency_element( & list, x));
  printf("modified Linked list is = \n");
  display(list);
  return 0;
}
