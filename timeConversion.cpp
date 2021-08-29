#include<stdio.h>
int main(){
	int a[3];
	for(int i=0; i<3; i++){
		scanf("%d", &a[i]);
	}
	if(a[0]>=24 && a[1]!=0 && a[2]!=0){
		printf("invalid input"); return 0;
	}
	int x = a[2], y = a[1];
	a[2] =((a[2]+20)/60)?((a[2]+20)%60):(a[2]+20);
	
	if((x + 20)/60 == 1)
		a[1]+=1; 
		
	if((a[1])/60 == 1){
		a[0]+=1;
	}
	a[1] = a[1]%60;
//	a[0] = a[0]%24;
		
	printf("Answer: %d:",a[0]);
	if(a[1]/10 == 0) printf("0%d:",a[1]);
	else printf("%d:",a[1]);
	if(a[2]/10 == 0) printf("0%d",a[2]);
	else printf("%d",a[2]);
}

//14 20 46
//24 20 46
//23 59 40
