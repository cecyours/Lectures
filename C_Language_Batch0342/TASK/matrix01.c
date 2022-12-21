#include<stdio.h>
void main()
{
	int matrix[10][10],i,j,n,m;
	
	printf("Enter no. of row-columns : ");
	scanf("%dx%d",&n,&m);
	printf("Enter matrix :    \n"); 
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		scanf("%d",&matrix[i][j]);
	}
	printf("\n-------------- MATRIX ------------\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("\t%d",matrix[i][j]);
		}
		printf("\n");
	}
}
