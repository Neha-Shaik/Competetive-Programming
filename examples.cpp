#include<stdio.h>
int main(){
	int h,m,sec,rem;
	scanf("%d%d%d",h,m,sec);
	if(h==24)
	  if(m!=0||sec!=0){
	  	printf("invalid input");
	  }
	if(sec<=39)
	 sec=sec+20;
	else if(sec==40){
		sec=00;
	}
	else {
		rem=sec%10
		sec=rem;
	}
	
	  
}
