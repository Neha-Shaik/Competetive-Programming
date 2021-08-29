#include<stdio.h>
int main(){
	struct complex{
		float real;
		float complex;
	} a,b,c;
	scanf("%f%f",&a.real,&a.complex);
	scanf("%f%f",&b.real,&b.complex);
	c.real=a.real+b.real;
	c.complex=a.complex+b.complex;
	printf("%f + i%f",c.real,c.complex);
}
