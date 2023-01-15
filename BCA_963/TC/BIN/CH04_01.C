#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
clrscr();
	printf("Enter the number : ");
	scanf("%d",&num);

	if(num>100 || num<0)
	{
		printf("You entered wrong number !!!\n");
		printf("\a"); //alert sound
	}
	printf("Number is : %d\n",num);
getch();
}