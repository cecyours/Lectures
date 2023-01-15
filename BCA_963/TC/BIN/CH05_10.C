#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,k;
	int m,n;
 clrscr();
	printf("Enter rows-columns : ");
	scanf("%d-%d",&n,&m);

	printf("Enter matrix A : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}


	printf("Enter matrix B : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	// calculate sum
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j] = 0;
			for(k=0;k<m;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("matrix C : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}

 getch();

}