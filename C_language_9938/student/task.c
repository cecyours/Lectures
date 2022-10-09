#include<stdio.h>
int main()
{
	int a[10][10][10];
	int n,m,o;
	int i,j,k;

	printf("Enter ROW X COLUMNS :\n");
	scanf("%dX%dX%d",&n,&m,&o);

	printf("Enter 3d array : \n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<o;k++)
			{
				scanf("%d",&a[i][j][k]);
			}
		}
	}

	printf("--------------------\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<o;k++)
			{
				printf(" %d ",a[i][j][k]);
			}
			printf("\n");
		}
	}
}