#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y)
{
	 int temp;
	  /*
		temp = *x;
		*x = *y;
		*y = temp;
	   */
	   *x = *x+*y;
	   *y = *x-*y;
	   *x = *x-*y;
	 printf("during  x : %d\t y : %d\n",*x,*y);

}
void main()
{
   int x,y;
clrscr();
	printf("Enter 2 numbers : ");
	scanf("%d,%d",&x,&y);

	printf("before  x : %d\t y : %d\n",x,y);

	swap(&x,&y);

	printf(" after  x : %d\t y : %d\n",x,y);

getch();
}