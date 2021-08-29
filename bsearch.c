#include<stdio.h>
void bsearch(int *A,int low,int high,int k){
	if(low>high){
		printf("not found");
		return;}
	int mid;
	mid=low+(high-low)/2;
	if(A[mid]==k){
		printf("%d is found",k);
		return;
	}
	else if(k>A[mid])
	 	low=mid+1;
	else
		high=mid-1;
	
	bsearch(A,low,high,k);
	
	
	
}
int main(){
	int A[]={1,2,3,6,7,8,93},i;
	int n=8,k;
	int low=0,high=n-1;
	printf("Enter the  Value to be searched: ");
	scanf("%d",&k);
	bsearch(A,low,high,k);

}
