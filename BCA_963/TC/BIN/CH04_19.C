#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();

	printf("Line 1\n");
	printf("Line 2\n");
    goto code;
	printf("Line 3\n");
	printf("Line 4\n");
	printf("Line 5\n");
   code:
	printf("Line 6\n");
	printf("Line 7\n");
getch();
}