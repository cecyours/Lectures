#include<stdio.h>
void main()
{
	char *p[100];
	int i,n;

	printf("Enter the size : ");
	scanf("%d",&n);
	flushall(); 
	printf("\n----------------\n"); 
	for(i=0;i<n;i++)
	{
		printf("Enter the data : "); 
		scanf("%s",p[i]);	
	}
	printf("---------------------\n");
	for(i=0;i<n;i++)
	{
		printf("Wwlcome %s\n",p[i]);
	}
}