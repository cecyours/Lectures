#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	char *p[5]
	clrscr();
		printf("Enter the number : ");
		scanf("%d",&n);
		flushall();
		printf("Enter the array : \n");
		for(i=0;i<n;i++)
		{
			printf("Data : ");
			scanf("%s",p[i]);
		}

		printf("\n-------------------\n");
		for(i=0;i<n;i++)
		{
			printf("--> %s\n",p[i]);
		}

	getch();
}