#include<stdio.h>
#include<conio.h>
void main()
{
	int rem,num,rev=0;
clrscr();
	printf("Enter the number : ");
	scanf("%d",&num);

	  while(num>0)
	  {
		rem = num%10;  // to get last digit
		rev = rev*10+rem;   //append the rem into rev
		num = num/10;   // to erase the last digit / decrement
	  }

	printf("  reverse number : %d\n",rev);
getch();
}