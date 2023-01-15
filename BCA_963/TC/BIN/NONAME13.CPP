#include<stdio.h>
#include<conio.h>
void main()
{
	int i,start,end;
	clrscr();
	printf("Enter the start, end position: ");
	scanf("%d,%d",&start,&end);
	for(i=start;i<=end;i++)
	{
		printf("  %2d",i);
	}


	getch();
}