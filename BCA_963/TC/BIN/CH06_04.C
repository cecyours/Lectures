#include<stdio.h>
#include<conio.h>
void main()
{
  char name[100];
  int len=0,i;
clrscr();
       printf("Enter name : ");
       gets(name);

       for(i=0;name[i];i++)
       {
		len++;  // increment till the NULL character.
       }
       printf("Length of %s is %d.",name,len);
getch();
}