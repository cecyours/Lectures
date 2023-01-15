#include<stdio.h>
#include<conio.h>
int i; // global variable
void main()
{
     int j;  //local variable
clrscr();

	printf(" default value at global scope: %d\n",i);
	printf("  default value at local scope: %d\n",j);
getch();
}