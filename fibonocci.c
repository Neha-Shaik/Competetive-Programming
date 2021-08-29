#include<stdio.h>
int fibonocci(int fib){
	if(fib==0){
		return 1;
	}
	else if(fib==1){
		return 1;
	}
	else return fibonocci(fib-1)+fibonocci(fib-2);
}
int main(){
	int fib0=5;
	int x=fibonocci(fib0);
	printf("%d",x);
}

