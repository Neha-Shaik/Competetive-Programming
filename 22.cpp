#include <stdio.h>

int main() { 	
	int n,i;
  	long factorial = 1;
    printf("Enter value of n : ");
    scanf("%d",&n);
    if (n<=0){
        printf(" input n=%d:factorial not defined",n);
        return 0;
	}
    
    for (i=1;i<=n;i++){
        factorial*=i;
       
    }
    printf("input n=%d:factorial is %ld",n,factorial);
    
    
    return 0;
}
