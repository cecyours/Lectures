#include<stdio.h>
void main()
{
	int i;
	int n;
	printf("Enter end position: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i*i);
	}
}
