#include<stdio.h>


int main()
{ 
//Final Score (T) = Marks obtained (M) X Attendance weight (W)
//Attendance weight (W) = no of classes attended (N) / Total number of classes conducted (K)
float M,T,W,N,K ;
scanf("%f",M);
scanf("%f",N);
scanf("%f",K);
W=N/K;
T=M*W;
switch(T){
	case 90..100:
		printf("Grade=EX");
		break;
	case 80..89:
		printf("Grade=A");
		break;
	case 70..79:
		printf("Grade=B");
		break;
	case 60..69:
		printf("Grade=c");
		break;
	case 50..59:
		printf("Grade=D");
		break;
	case 40..49:
		printf("Grade=E");
		break;
	case 0..39:
		printf("Grade=F");
		break;
	default:
		printf("Final score=%f",T);
		
}


   
}
