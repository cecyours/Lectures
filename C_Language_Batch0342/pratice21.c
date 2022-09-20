#include<stdio.h>
int main()
{
	int a[10][10][10];
	int i,j,k;
	int n,m,o;
	int counter=0;

	printf("Enter n-o-m : ");
	scanf("%d-%d-%d",&n,&m,&o);

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<o;k++)
			{
				a[i][j][k] = counter;
				counter++;
			}
		}
	}
	printf("--------------------------\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<o;k++)
			{
				printf("\t%3d",a[i][j][k]);
			}
			printf("\n");
		}
		printf("-----------\n");
	}
}