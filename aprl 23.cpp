#include <stdio.h>

int main()
{
  int a,b,c,d,e,f;
  printf("enter the 6 numbers : ");
  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
   if(b-a==c-b && c-b==d-c && e-d==f-e && d-c== e-d)
      printf("AP");
    return 0;
}
