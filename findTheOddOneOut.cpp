#include<stdio.h>
int main(){
	int n = 5;
	int a[n]; int ans = 0;
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);	
	}
	for(int i=0; i<n; i++){
		ans ^= a[i];
	}
	printf("Answer: %d", ans);
}
