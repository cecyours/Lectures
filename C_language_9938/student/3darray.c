#include<stdio.h>
int main()
{
	int a[10][10][10];
	int z,x,d;
	int e,b,c;
	int countr = 0;

	printf("Enter a-b-c ;");
	scanf("%d-%d-%d",&e,&b,&c);

	for(z=0;z<e;z++)
	{
		for(x=0;x<b;x++)
			{
				for(d=0;d<c;d++)
				{
								a[z][x][d] = ++countr;
				}
			}
	}
	printf("======================================\n");


	for(z=0;z<e;z++)
	{
		for(x=0;x<b;x++)
			{
				for(d=0;d<c;d++)
				{
					{
								printf("%3d",a[z][d][x]);
					}
					
				}
				printf("\t");
			}
			printf("\n");
	}
}