#include<stdio.h>
#include<conio.h>
void main()
{
	int day;
clrscr();
	printf("Enter the day number : ");
	scanf("%d",&day);

	switch(day)
	{
		case 1:  printf("Monday \n");    break;
		case 2:  printf("Tuesday \n");   break;
		case 3:  printf("Wednesday \n"); break;
		case 4:  printf("Thursday \n");  break;
		case 5:  printf("Friday \n");    break;
		case 6:  printf("Saturday \n");  break;
		case 7:  printf("Sunday \n");    break;
	       default:  printf("please, Enter the valid number !!!");
	}
getch();
}