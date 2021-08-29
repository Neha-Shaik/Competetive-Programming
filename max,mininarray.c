#include<stdio.h>
int findmax(int*a,int n){
	int i=0,max=a[0];
	for(i=0;i<n;i++){
		if(max<a[i])
		max=a[i];
	}
	return max;
}
int findmin(int*a,int n){
	int i=0,min=a[0];
	for(i=0;i<n;i++){
		if(min>a[i])
		min=a[i];
	}
	return min;
}
int main(){
	int a[]={-70,1,7,8,3,4,22,43};
	int n=8;
	printf("Max is %d\n",findmax(a,n));
	printf("Min is %d ",findmin(a,n));
	
}
