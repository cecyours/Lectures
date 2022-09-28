#include<stdio.h>
void main()
{
	char ch;
	int size;
// clrscr ();
	//finding size of char with ch variable
	size = sizeof(ch);
	printf("size of character : %d byte\n" ,size);

	size=sizeof (int);
	printf("size of integer : %d byte\n" ,size);

// getch();

}