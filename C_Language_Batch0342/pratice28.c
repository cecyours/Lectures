#include<stdio.h>
#include<conion.h>
void main()
{
	char *p[5];
	int i,n;

	printf("Enter your number : ");
	scanf("%d",&n);
	flushall();

	printf("Enter the array : \n");
	for(i=0;i<n;i++)
	{
		printf("Data : ");
		scanf("%s",p[i]);
	}
	printf("\n---------------------\n");
	for(i=0;i<n;i++)
	{
		printf("--> %s\n",p[i]);
	}
}