#include<stdio.h>
int main(){
	int a=19,b=57,temp,i;
	if(b>a){
		temp=b;
		b=a;
		a=temp;
	}
	if(a%b==0){
		printf("%d",a);
		return 0;}
	for(i=2;i<a*b;i++){
		if(i%a==0 &&i%b==0){
			printf("%d",i);
		}
	
	}
	if(i==a*b)
    	printf("%d",i);	
	
	
}
