#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
clrscr();
	 printf("Enter a ASCII VALUE : ");
	 scanf("%d",&num);

	 textattr(13); // 13 is color code. for more color visit git id. ;)

	 cprintf("%d -> %c\n\r",num,num);
getch();
}