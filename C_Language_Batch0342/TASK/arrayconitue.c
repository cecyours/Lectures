#include<stdio.h>
void main()
{
	int a[100],i,n; 
	
	printf("Enter the size : ");
	scanf("%d",&n);
	
	printf("Enter the array : \n");
	for(i=0;i<n;i++)
	{
		printf(" a[ %d ] =",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
			continue;
		
		printf(" a[%d] = %d\n",i,a[i]);
	}
}
