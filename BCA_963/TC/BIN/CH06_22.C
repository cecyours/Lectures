#include<stdio.h>
#include<conio.h>
void main()
{
   char str[100],ch='$';
   int i;
   clrscr();
	printf("Enter a String : ");
	gets(str);

	for(i=0;str[i];i++)
	{
		str[i] = ch;  // assign ch('$') to each character of str
	}
	printf(" Masked String : %s\n",str);
   getch();
}