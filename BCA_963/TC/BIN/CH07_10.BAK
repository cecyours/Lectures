#include<stdio.h>
#include<conio.h>
/*we are going to swap 2 numbers without third variable*/
void swap(int *a,int *b)
{
	*a = *a+*b;
	*b = *a-*b;
	*a = *a-*b;
}
void main()
{  int a,b;
   clrscr();
	printf("Enter values as a,b : ");
	scanf("%d,%d",&a,&b);
	printf("a : %d\tb : %d\n",a,b);
		swap(&a,&b);
	printf("a : %d\tb : %d\n",a,b);
   getch();
}