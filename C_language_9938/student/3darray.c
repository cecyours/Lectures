#include<stdio.h>
int main()
{
	int a[10][10][10];
	int z,x,c;
	int q,w,e;
	int counter = 0;

	printf("Enter q-w-e ;");
	scanf("%d-%d-%d",&q,&w,&e);

	for(z=0;z<q;z++)
	{
		for(x=0;x<w;x++)
			{
				for(c=0;c<e;c++)
				{
								a[z][x][c] = ++counter;
				}
			}
	}
	printf("---------------------------\n");


	for(z=0;z<q;z++)
	{
		for(x=0;x<w;x++)
			{
				for(c=0;c<e;c++)
				{
					{
								printf("%3d",a[z][c][x

						]);
					}
					
				}
				printf("\t");
			}
			printf("\n");
	}
}