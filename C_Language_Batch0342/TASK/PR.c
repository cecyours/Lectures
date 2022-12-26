#include<stdio.h>
void main()
{
	int a[10][10],n,m,i,j;
	
	printf("Enter row-columes : ");
	scanf("%d-%d",&n,&m);
	
	printf("Enter the array : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}				
	printf("------------MATRIX-------------\n"); 

		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(i==j)
				printf("\t%2d",a[i][j]);
				else 
				printf("%2d",0);
			}
			printf("\n");
		}
	}

