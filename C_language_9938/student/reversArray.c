#include<stdio.h>
int main()

{
	int a[100],i,j,n,temp;

	printf("Enter the size : ");
	scanf("%d",&n);

	printf("Enter the array : \n");

	for(i=0;i<n;i++)
	{
		printf("a[ %d ] : ",i);
		scanf("%d",&a[i]);
	}

	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	printf("------------------------\n");

	for(i=0;i<n;i++)
	{
		printf("a[ %d ] = %d \n",i,a[i]);
	}
}
