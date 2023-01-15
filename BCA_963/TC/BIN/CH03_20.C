#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	int *p = &a;  // &a(address of a ) assigns to p pointer.
clrscr();

	printf("a : Address %p\t data : %d\n",&a,a);
	printf("p : Address %p\t data : %d\n",p,*p);

	printf("Size of int : %d\n",sizeof(int));
getch();
}