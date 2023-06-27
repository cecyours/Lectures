#include<stdio.h>
#include<conio.h>
void main()
{
	float marks;
clrscr();
	printf("Enter your marks : ");
	scanf("%f",&marks);

	if(marks>33)
	{
		textattr(2);
		cprintf("pass");
	}
	else
	{      	textattr(4);
		cprintf("Better luck next time.");
	}

	printf("\n\ryour marks %.2f\n",marks);
getch();
}