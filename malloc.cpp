#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* arr;
	int n, i;
	scanf("%d", &n);
	arr=(int*)malloc(n*sizeof(int));
	if(arr == NULL)
	{
	printf("Memory is not allocated\n");
    }
	else
	{
		printf("Memory is successfully allocated using malloc\n");
		printf("Enter the elements\n ");
		for(i=0; i<n; i++)
		{
			scanf("%d", &arr[i]);
		}
		for(i=0; i<n; i++)
		{
			printf("%d ", arr[i]);
		}
		free(arr);
		printf("\nMemory is successfully freed");
	}
	return 0;
}
