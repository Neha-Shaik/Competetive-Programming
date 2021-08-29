#include <stdio.h>

int m=0, n=0;

void sortBoth(int a[], int b[], int ans[]){
    
    int i=0, j=0, k=0;
    int r = 0;
    
    while(i<m && j<n){
    	
        if(a[i] < b[j]){
            ans[k++] = a[i++];
        } else if(a[i] > b[j]){
            ans[k++] = b[j++];
        } else {
        	ans[k++] = b[j++];
        }
        
    }
  
        while(i<m){
            ans[k++] = a[i++];
        }
  
        while(j<n){
            ans[k++] = b[j++];
        }
    
}

int main() {
    printf("Enter the number of elements in array1: ");
    int i=0;
    scanf("%d", &m);
    int a[m];
  	int ans[m+n];
  	printf("Enter the elements in array1: ");
    for(i=0; i<m; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the number of elements in array2: ");
    scanf("%d", &n);
    int b[n];
    printf("Enter the elements in array2: ");
    for(i=0; i<n; i++){
        scanf("%d", &b[i]);
    }
    
    
    sortBoth(a, b, ans);
    printf("The output of final sorted array is: ");
    for(i=0; i<m+n; i++){
        printf("%d ", ans[i]);
    }
    return 0;
}
