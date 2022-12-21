
#include<stdio.h>
void main()
{
	int a[100];
	int i,n;
	
	printf("Enter size : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n---------------\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	
}
