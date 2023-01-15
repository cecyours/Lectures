#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
clrscr();
       printf("Enter a number : ");
       scanf("%d",&num);

       num = num + 100; //adding 100 to num.

       printf("    new number : %d\n",num);
getch();
}