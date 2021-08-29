#include<stdio.h>
float F1(float x)
{ return(x*x*x-14*x*x+35*x+50);
}
float F2(float x){
    return(x*x-(12*x)-805);
}

int main()
{float a,b,c,v1,v2,v3,i,d,e,f;
v1 = F1(a);
v2 = F1(b);
for (i=0;i<4;i++){

printf("\n Enter the values of a and b respectively such that a is greater than b :   ");
// Make sure a>b
scanf("%f%f",&a,&b);
if (F1(a)*F1(b)>0)
   printf("there is no root for F1 in this interval");
else {

   while (a-b > 0.01){
    c=(a+b)/2;
    v3 = F1(c);
    if (F1(c)==0)
        break;
    else if (F1(c)*F1(a) < 0)
        b = c;
    else
        a = c;}
	  printf("The value of the root for F1 in the interval [b,a]is : %f",c);}
	}
for (i=0;i<4;i++){

printf("\n Enter the values of d and e respectively such that d is greater than e:   ");
// Make sure d>e
scanf("%f%f",&d,&e);
if (F2(d)*F2(e)>0)
   printf("there is no root for F2in this interval");
else {

   while (d-e > 0.01){
    f=(d+e)/2;
    v3 = F2(c);
    if (F2(f)==0)
        break;
    else if (F2(f)*F2(d) < 0)
        e = f;
    else
        d = f;}
	  printf("The value of the root for F2 in the interval [e,d]is : %f",f);}
	}
          
   return 0;
}
