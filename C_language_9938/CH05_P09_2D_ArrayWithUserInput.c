
#include<stdio.h>

int main()
{
	int a[10][10];
	int n,m;
	int i,j;

	printf("Enter [ROWxCOLULM] : \n");
	scanf("%dx%d",&n,&m);

	printf("Enter 2d array : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("-------------------\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}


}