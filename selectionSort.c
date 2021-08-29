#include<stdio.h>
int main(){
	int a[]={1,4,5,6,3},i,j,max,maxindex,n=5,temp;
	for(j=0;j<n;j++){
		max=a[0]; maxindex=0;
		for(i=0;i<n-j;i++){
			if(max<a[i]){
				max=a[i];
				maxindex=i;
			}
		}
		temp=a[n-j-1];
		a[n-j-1]=a[maxindex];
		a[maxindex]=temp;
		printf("%d \n", n-j);	
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
