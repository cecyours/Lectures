#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],d[10][10];
	int i,j;
	int n,m;

	printf("Enter ROW X COLUMNS : ");
	scanf("%d X %d",&n,&m);

	printf("Enter the matrix : A\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter the matrix : B\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("Enter the matrix : C\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&c[i][j]);
		}
	}

	for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			d[i][j] = a[i][j] + b[i][j] + c[i][j];
		}
	}


	printf("\n\nthe matrix : D\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf(" %2d ",d[i][j]);
		}
		printf("\n");
	}
}