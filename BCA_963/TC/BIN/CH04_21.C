#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
clrscr();
	printf("Enter the number : ");
	scanf("%d",&num);

	if(num<0)
	{
		printf("%d is -ve..\nexit...\n",num);
		getch();
		exit(10);
	}
	printf("Entered number is %d\n",num);
getch();
}