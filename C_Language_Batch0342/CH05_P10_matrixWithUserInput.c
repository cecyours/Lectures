#include<stdio.h>
void main()
{
	int a[10][10];
	int i,j;
	int n,m;
	
	printf("Enter matrix range : ");
	scanf("%dx%d",&n,&m);
	
	printf("enter matrix : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n------------\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
