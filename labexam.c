#include <stdio.h>

int max(int x, int y){
    return (x>y)?x:y;
}

int func(int a[], int n){
    int ans = 0, current_sum=0, i;
    for(i=0; i<n; i++){
    	current_sum += a[i];
        if(current_sum < 0) current_sum = 0;
        
        ans = max(ans, current_sum);
//        printf("%d\n", ans);
    }
    return ans;
}

int main() {
//    int a[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n, i;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements into the array:\n");
    for(i = 0; i<n; i++){
    	scanf("%d", &a[i]);
	}
//	for(i = 0; i<n; i++){
//    	printf("%d", a[i]);
//	}
	printf("\n");
    printf("largest Sum: %d", func(a, n));
    
    return 0;
}
