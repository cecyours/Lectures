#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,max;
clrscr();
	printf("Enter 3 numbers : ");
	scanf("%d,%d,%d",&a,&b,&c);

	if(a>b)
	{
		//execute when a is greater than b.
		if(a>c)
		{
			max = a;
		}
		else
		{
			max = c;
		}
	}
	else
	{
		//execute when b is greater than a.
		if(b>c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
	}
	printf("Maximum is %d\n",max);
getch();
}