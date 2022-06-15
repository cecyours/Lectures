#include<stdio.h>
void main()
{
	int a[100],i,n;
	int x,f=0;
	
	printf("enter size : ");
	scanf("%d",&n);
	
	printf("Enter elements : \n");
	for(i=0;i<n;i++)
	{
		printf("a[ %d ] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("------------\n");

	printf("Enter data to search : ");
	scanf("%d",&x);
	
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		{
			f =1;
			printf("%d is found at %d index\n",x,i);
		}
	}
	if(f==0)
	{
		printf("%d is absent.",x);
	}
}
