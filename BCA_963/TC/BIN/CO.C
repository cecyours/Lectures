#include<stdio.h>
#include<conio.h>
void main()
{
    char *name[100];
    int n,i;
	clrscr();
		printf("Enter your size : ");
		scanf("%d",&n);
		 flushall();
		printf("Enter your data : \n");
		for(i=0;i<n;i++)
		{
			printf("Enter name : ");
			gets(name[i]);
		}

		printf("--------------\n");

		for(i=0;i<n;i++)
		{
			printf("welcome %s\n",name[i]);
		}
	getch();
}