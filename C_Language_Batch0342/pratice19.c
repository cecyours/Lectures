#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("Enter the size : ");
	scanf("%d",&n);

	printf("Enter the array : \n");
	for(i=0;i<n;i++)
	{
		printf(" a[%d] =",i);
		scanf("%d",&a[i]);
	}
	printf("\n--------------------\n\n");
	for(i=n-1;i>=0;i--)
		{
			printf("a[%d] = %d\n",i,a[i]);
		}
}