#include<stdio.h>

int main()
{
	int i,j;
	int a[10][10] = {{2,3,4},
					 {6,5,9},
					 {8,9,6},
					 {9,3,1}};

		for(i=0;i<4;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
}