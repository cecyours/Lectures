#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
clrscr();
	printf("Enter the number : ");
	scanf("%d", &num);

	if(num%2==0) // if the remainder is 0 , then number is even.
	{
	      printf("%d is the even number.\n",num);
	}
	else  // if remainder is not zero, them number is odd.
	{
	     printf("%d is the odd number.\n",num);
	}
getch();
}