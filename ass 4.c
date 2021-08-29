#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c,d,x,y,z,w;
    printf("Enter the range value \n");
    scanf("%d",&n);
	if(n<1729)
	{
		printf("No taxi cab number found within %d",n);
	}
	else{
    for(a=1;a<=n;a++)
    {
        x=pow(a,3);
        if(x>n)
		break;
        for(b=a;b<=n;b++)
        {
            y=pow(b,3);
            if(x+y>n)
            break;
            for(c=a+1;c<=n;c++)
            {
                z=pow(c,3);
                if(z>x+y)
                break;
                for(d=c;d<=n;d++)
                {
                    w=pow(d,3);
                    if(w+z>y+x) 
					break;
				    if(w+z==x+y)
                    {
                        printf("%d : {(%d,%d),(%d,%d)}\n",(x+y),a,b,c,d);
                    }
                }
            }
        }
	}
}

	return 0;
}
