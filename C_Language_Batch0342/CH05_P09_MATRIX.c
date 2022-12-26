#include<stdio.h>
int main()
{
	int a[3][2] = {{2,4},
					{7,9},
					{7,3}};
					
	int i,j;
//	printf("Element : %d\n",a[0][1]);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
