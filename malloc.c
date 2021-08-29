#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,a,i,j,k;
    printf("Enter the size of the 3d array\n");
    scanf("%d%d%d",&x,&y,&z);
    int* arr = (int*)malloc(x*y*z* sizeof(int));
    printf("Enter %d elements:\n",x*y*z);
    for (i=0;i<x;i++)
    {
        for (j=0;j<y;j++)
        {
            for (k=0;k<z;k++)
                {
                    scanf("%d",&a);
                    *(arr + i*y*z + j*z + k) = a;
                }
        }
    }
    printf("printing 3D array\n");
    for (i=0;i<x;i++)
    {
        for (j=0;j<y;j++)
        {
            for (k=0;k<z;k++) {
                printf("%d ", *(arr + i*y*z+ j*z + k));
            }

            printf("\n");
        }
        printf("\n");
    }

    free(arr);
    return 0;
}
