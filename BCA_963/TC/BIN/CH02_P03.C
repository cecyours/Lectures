#include<stdio.h>
#include<conio.h>
void main()
{
	 int a=10,b=20,c=30;
	 int *
	 ptr,x;
clrscr();

	ptr = &a;
	printf("value : %d at %u\t value %d at %u\n",a,&a,*ptr,ptr);

	ptr--;
	printf("value : %d at %u\t value %d at %u\n",b,&b,*ptr,ptr);

	ptr--;
	printf("value : %d at %u\t value %d at %u\n",c,&c,*ptr,ptr);


getch();
}