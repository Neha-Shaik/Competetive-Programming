#include<stdio.h>
int main(){
	int n,i,j,flag=1;
	scanf("%d",&n);
	int M[n][n];
	int r=1,c=1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&M[i][j]);
		}
	}
	for(i=0;i<n;i++){
		if(M[r][i] > M[r][c])
			flag = 0;
	}
	for(i=0;i<n;i++){
		if(M[i][c] < M[r][c])
			flag = 0;
	}
	if(flag!=1){
		printf("it is a saddle");
	} else {
		printf("it is not a saddle");
	}
	
	/*
		3
		1 2 3
		7 5 6
		8 4 9
	*/
}
