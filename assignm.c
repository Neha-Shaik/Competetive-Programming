#include<stdio.h>
struct Ournode{
char x,y,z;
};
int main(){
struct Ournode p = {'1', '0', 'a'+2};
struct Ournode *q = &p;
printf ("%c, %c\n", *((char*)q), *((char*)q+2));
printf("%c",p.x);
return 0;
}
