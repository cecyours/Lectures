#include<stdio.h>
#include<stdlib.h>
int main()


{
	int *a;
	int i,n; 

	printf("Enter the number : ");
	scanf("%d",&n);

	// a = malloc(sizeof(int)*n);
	a = calloc(sizeof(int),n);

	printf("Enter the array : \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] =",i);
		scanf("%d",(a+i));
	}
	printf("\n-------------------\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,*(a+i));
	}
	free(a);

	printf("\n-------------------\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,*(a+i));
	}
}