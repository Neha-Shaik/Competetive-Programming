#include<stdio.h>
#include<string.h>
int x = 1;

void fun(){
	static int x = 5;
	printf("Inside the fun: %d\n", x);
	x++;
	printf("exit value, fun:%d\n", x);
}

void multi(){
	printf("Multi: %d\n", x);
	x*=10;
	printf("exit value, multi: %d\n",x);
}
int main(){
//	int a=5, b,c;
//	c = 2*(b=2*a++);
//	printf("%d,%d,%d",a,b,c);
//	int n=3377,val;
//	for(int val=1;n;n/=5)
//	val*=n%5;
//	printf("%d",val);
   int a[]={'r','a','c','e','c','a','r'},n=7,i,sum=0;
   for(int i=0;i<n/2;i++){
   	if(a[i]==a[n-i-1]){
   		sum++;
	   }
	   
   }
   if(sum==n/2){
   	printf("palindraome");
   }
//	fun(); multi();
//	fun(); multi();
//	printf("%d", x);

//	int sum = 1; 
//	for(int i=0; i<10; i++){
//		for(int j=i; j<5; j++){
//			for(int k=j; k<2; k++){
//				printf("k:%d ",k);
//				sum++;
//			}
//			printf("j: %d\n",j);
//		}
//		printf("i: %d\n",i);
//	}
//	int sum = 2; 
//	for(int i=0; i<10; i++){
//		for(int j=i; j<20; j++){
//			for(int k=j; k<30; k++)
//				sum*=2;
//		}
//	}
//	printf("%d", sum);
}
