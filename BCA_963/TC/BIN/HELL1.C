#include<conio.h>
#include<stdio.h>
void main()
{
	int a[5][5][5];
	int i,j,k;
	int n,m,o;
clrscr();
	printf("Enter n : ");
	scanf("%d",&n);

	printf("Enter m : ");
	scanf("%d",&m);

	printf("Enter o : ");
	scanf("%d",&o);

	printf("Enter data : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<o;k++)
			{
				printf("Enter data : ");
				scanf("%d",&a[i][j][k]);
			}
		}

	}
	printf("Your data : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<o;k++)
			{
				printf("\t data : %d\n",a[i][j][k]);

			}
		}

	}
getch();
}