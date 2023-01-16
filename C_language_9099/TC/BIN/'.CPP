#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	clrscr();
	printf("Enter a number ");
	scanf("%d",&number);


       if(number<0)
       {
		number = number*-1;
	}
	printf(" %d is",number);

      getch();
}

