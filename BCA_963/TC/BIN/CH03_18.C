#include<stdio.h>
#include<conio.h>
void main()
{
	int i=10;
clrscr();
	 printf("during post-decrement : %d\n",i--);
	 printf(" after post-decrement : %d\n",i);

	 printf("\n-----------------------\n\n");
	 i = 10;  //reset the value.
	 printf(" during pre-decrement : %d\n",--i);
	 printf("  after pre-decrement : %d\n",i);
getch();
}