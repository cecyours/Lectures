#include<stdio.h>
void main()
{
	int a[10][10];
	int i,j;
	int n,m; 
	
	printf("Enter row-colums : ");
	scanf("%d-%d",&n,&m);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==j)
			{
				a[i][j] = 1;
			}
			else{
				a[i][j] = 0;
			}
	}
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("\t%2d",a[i][j]);
		}
		printf("\n");
	}


}
