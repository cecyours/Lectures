
#include<stdio.h>

int main()
{
	int i,j;
	int a[10][10] = {{2,4,2},
					 {4,2,5},
					 {8,9,4}};


	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
	}	


}