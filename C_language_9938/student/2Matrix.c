#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int n,m;
	int i,j;

	printf("Enter ROW X COLUMNS : ");
	scanf("%dX%d",&n,&m);

	printf("Enter the matrix : A\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("\nEnter the matrix : B\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("\nthe matrix is : C\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%2d",c[i][j]);
		}
		printf("\n");
	}
}