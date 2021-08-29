#include<stdio.h>
int function1(int);
void main(){
	printf("%d \n", function1(7));

}

int function1(int x){
	if(x<=4) return x;
	return function1(--x);
}

