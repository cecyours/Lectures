#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	       printf("Enter your character : ");
	       //ch = getch(); // get a character without display it.
	       //ch = getche();   // get a character with display it.
		 ch = getchar(); // get a character with dispay & untill press a key
	       printf("\n-------------\n");

	       printf("your character is : %c\n",ch);

	getch();
}    
