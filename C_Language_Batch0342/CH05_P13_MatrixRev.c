#include<stdio.h>
void main()
{
	int a[10][10],i,j,n,m;
	
	printf("Enter row-columns : ");
	scanf("%d,%d",&n,&m);
	
	printf("Enter matrix : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(i==j)
				printf("%d",a[i][j]);
				else
				printf("0");
			}
			printf("\n");
		}
	}
	

