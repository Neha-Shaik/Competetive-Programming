# include <stdio.h>
int main(){
int a[3][3],i, j, temp;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
a[i][j] = i*3+j;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
temp = a[i][j];
a[i][j] = a[j][i];
a[j][i] = temp;
}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
return 0;
}
