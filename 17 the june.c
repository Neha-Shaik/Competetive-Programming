#include <stdio.h>

int* SetUnion( int a[], int na, int b[], int nb, int c[], int *n){
    int nc = na+nb;
    int i=0,j=0,k=0;
    while(i<na && j<nb){
        if(a[i]<b[j]){
            c[k++] = a[i++];
        }else if(a[i]>b[j]){
            c[k++] = b[j++];
        } else {
            c[k++] = a[i++];
            j++;
        }
    }
    while(i<na){
        c[k++]=a[i++];
    }
    while(j<nb){
        c[k++] = b[j++];
    }
    *n = k;
    return c;
}

int* SetIntersection(int a[], int na, int b[], int nb, int c[], int* n){
    int k=0,i,j;
    for( i=0; i<na; i++){
        for( j=0; j<nb; j++){
            if(a[i] == b[j]){
                c[k++] = a[i];
            }
        }
    }
    *n = k;
    return c;
}

int main() {

    int a[6]={1,4,6,7,8,9};
    int b[5]={0,2,4,7,9};
    int c[11], *ptr, k;
    int i;
    ptr = SetUnion(a,6,b,5,c, &k);
    printf("The union of two arrays is : ");
    for( i=0; i<k; i++){
        printf("%d ", ptr[i]);
    }
    printf("\n The Intersection of two arrays is: ");
    ptr = SetIntersection(a,6,b,5,c,&k);
    for( i=0; i<k; i++){
        printf("%d ", ptr[i]);
    }

    return 0;
}

