#include <stdio.h>

int main() {
	float a,b,k=1,min;
   printf("Enter two numbers: ");
   scanf("%f %f",&a,&b);
   if (a%b==0.0 || b%a==0.0){
   	if (b>a){
   		printf("%f",&a);
   		min=a;
	   }
	else
	    printf("%f",&b);
	    min=b;
   }
   for (float i=1;i<=min;i++){
   	if (a%i==0.0 || b%i==0.0){
   		a=a/i;b=b/i;
   		k=k*i;
   		
	   }
	   
   }
   printf("LCM: ",k*a*b);   
   
   
   
   
   
    return 0;
}


