
#include<stdio.h>
int main()
{
	int a[100],i,n;
	int max=0,min=0;

	printf("Enter the size : ");
	scanf("%d",&n);

	printf("Enter the array : \n");

	for(i=0;i<n;i++)
	{
		printf("a[ %d ]=",i);
		scanf("%d",&a[i]);
	}

	printf("------------------\n");
	min=max=a[0];

for(i=0;i<n;i++)
{
	
	if(max<a[i])
	{
		max = a[i];
	}
	if(min>a[i])
	{
		min = a[i];
	}

}
	printf("min : %d, max : %d\n",min,max);

}