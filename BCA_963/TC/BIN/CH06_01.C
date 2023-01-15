#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[] = "Computer";
	char str2[5]= {'l','i','f','e'}; // 1 extra size for NULL
	char str3[4] = {'H','o','m','e'}; // gives garbage string due to absent of NULL position.
	char str4[10] = {'w','o','r','\0','l','d'}; //display wor, l,d will terminated by \0
   clrscr();
	printf("str1 : %s\n",str1);
	printf("str2 : %s\n",str2);
	printf("str3 : %s\n",str3);
	printf("str4 : %s\n",str4);
   getch();
}