#include <stdio.h>

void main() {
   int n=7,i;
   for(i=2;i<n;i++){
   	if(n%i==0){
   		printf("its not prime");
   		break;
	   }
   }
   if(i==n){
   	printf("its prime");
   }
}
