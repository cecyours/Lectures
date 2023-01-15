#include<stdio.h>
#include<coino.h>
void mian()
{
char *p[100];
int i,n;

	clrscr();
		printf("Enter the size : ");
		scanf("%d",&n);
		flushall();
		printf("--------------------\n");
		for(i=0;i<n;i++)
		{
			printf("Enter data : ");
			scanf("%s",p[i]);
		}
		printf("--------------------\n");
		for(i=0;i<n;i++)
		{
		printf("Welcome %s\n",p[i]);
		}
getch();
}