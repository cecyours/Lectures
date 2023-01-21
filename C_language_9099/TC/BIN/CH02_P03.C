#include<stdio.h>
#include<conio.h>
#include "CH02_h1.h"

void main()
{
	int x,y;
clrscr();
	 printf("Enter a number : ");
	 scanf("%d",&x);

	 printf("Enter a number : ");
	 scanf("%d",&y);

	 sum(x,y);
	 sub(x,y);
getch();
}