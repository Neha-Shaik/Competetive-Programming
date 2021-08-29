#include<stdio.h>

int count = 0;

int search(int a[], int i, int j, int x){
    if(a[i]==x){count++; printf("Count: %d\n", count); return i;}
    if(a[j]==x){count++; printf("Count: %d\n", count); return j;}
    if((i==j)||(j<i)){count++; printf("Count: %d\n", count); return -1;}
    search(a, ++i, --j, x);
}

int main(){
    int n, x; 
    printf("Enter the size of array: ");
	scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &x);
    printf(">> Calling the search function: ");
    printf("\nPosition: %d" ,search(a, 0, n-1, x));
    return 0;
}
