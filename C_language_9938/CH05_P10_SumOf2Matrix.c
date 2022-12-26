#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j;
	int n,m;

	printf("Enter row x columns : ");
	scanf("%dx%d",&n,&m);

	printf("Enter the matrix : A\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n\nEnter the matrix : B\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	} 
	/*calculate..*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{ 
			c[i][j] = a[i][j]+b[i][j];
		}
	}

	printf("The matrix: C\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{ 
			printf("%2d ", c[i][j]);
		}
		printf("\n");
	}

	

	
	

}