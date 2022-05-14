#include<conio.h>
#include<stdio.h>
void main()
{
	char ch;
	char name[100]; // array
 //	printf("Enter a character : ");
//	ch = getchar(); // method 4 // display & wait
//	ch = getche(); // method 3 // display
//	ch = getch(); // method 2 // none(no display no wait)
//	scanf("%c",&ch); //method 1 // same as method 4
	
	printf("\nEntered Character : %c\n",ch);

	printf("\n---------++---------------------\n");
	
	printf("Enter name : ");
	gets(name);
//	scanf("%s",name);
	printf("Entered  name : %s\n",name);
	
}

