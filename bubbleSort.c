#include<stdio.h>
int main(){
	int a[]={1,6,9,3,4,11},i,j,n=6,temp;
	//swap
	 for(j=0;j<n;j++){
	 	for(i=0;i<n-1;i++){
	  		if(a[i]>a[i+1]){
	 			temp=a[i+1];
	 		    a[i+1]=a[i];
	 		    a[i]=temp;
	 	    }
	    }
    }
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
}
