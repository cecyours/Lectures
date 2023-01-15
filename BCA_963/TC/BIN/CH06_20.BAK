#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100],temp;
	int i,j;
clrscr();
	 printf("Enter a String : ");
	 gets(str);

	 for(j=0;str[j];j++); // length of str.
	 j=j-1; // to avoid \0

	 for(i=0;i<j;i++,j--)
	 {
	     temp = str[i];
	     str[i] = str[j];
	     str[j] = temp;
	 }
	 printf("Reverse : %s\n",str);
getch();
}