#include<conio.h>
#include<stdio.h>
void main()
{
      int i;
clrscr();
     for(i=0;i<=100000;i++)
     {
       textattr(i);
       cprintf("%c ",i);
     }

getch();
}