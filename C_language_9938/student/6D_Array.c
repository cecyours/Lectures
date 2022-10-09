#include<stdio.h>
int main()
{
	int a[10][10][10][10][10][10];
	int z,x,c,v,b,n;
	int q,w,e,r,t,y;
	int counter = 0;

	printf("Enter q-w-e-r-t-y ;");
	scanf("%d-%d-%d-%d-%d-%d",&q,&w,&e,&r,&t,&y);

	for(z=0;z<q;z++)
	{
		for(x=0;x<w;x++)
			{
				for(c=0;c<e;c++)
				{
					for(v=0;v<r;v++)
					{
						for(b=0;b<t;b++)
						{
							for(n=0;n<y;n++)
							{
								a[z][x][c][v][b][n] = ++counter;
							}
						}
					}
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
					for(v=0;v<r;v++)
					{
						for(b=0;b<t;b++)
						{
							for(n=0;n<y;n++)
							{
								printf("%6d",a[z][x][c][v][b][n]);
							}
							printf("\t");
						}
						printf(" - ");
					}
					printf("\n");
				}
			}
	}
}