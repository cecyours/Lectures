#include<stdio.h>
void main()
{
	int u[3][4] = {{5,3},
					{3,7},
					 {4,6}};
					 
	int a,b; 
	
	for(a=0;a<3;a++)
	{
		for(b=0;b<2;b++)
		{
			printf("%d" u[a][b]);
		}
		printf("\n")
	}
}
