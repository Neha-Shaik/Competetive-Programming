#include<stdio.h>
int main(){
	int i, j, k, counter = 0;
	for( i=0; i<10; i++){
		for(j=0; j<i; j++){
			for(k=0; k<10; k++){
				if(k!=j) break;
				else counter++;
			}
		}
	}
	printf("%d", counter);
}
