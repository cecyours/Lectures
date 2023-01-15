#include<stdio.h>
#include<conio.h>
void main()
{
   int n = 10;
   int *ptr = &n;
   clrscr();
	printf("--- : info of 'n' with 'n' variable : ---- \n");
	printf("       address : %p\t value : %d\n\n",&n,n);

	printf("--- : info of 'n' with 'ptr' pointer : ---- \n");
	printf("       address : %p\t value : %d\n\n",ptr,*ptr);

   getch();
}