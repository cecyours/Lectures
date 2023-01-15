#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	int size;
clrscr();

	  // finding size of char with ch variable
	   size = sizeof(ch);   //way 1 with variable
	   printf("size of character : %d byte\n",size);

	   size = sizeof(int);  //way 2 with data type keyword
	   printf("  size of integer : %d byte\n",size);

getch();
}