#include<stdio.h>
#include<conio.h>
void main()
{
	int i=10;
clrscr();
	 printf("During post-increment : %d\n",i++); //access then increment
	 printf(" After post-increment : %d\n",i);

	 printf("\n-----------------------\n\n");
	 i = 10;  //reset the value.
	 printf(" during pre-increment : %d\n",++i);
	 printf("  After pre-increment : %d\n",i);
getch();
}