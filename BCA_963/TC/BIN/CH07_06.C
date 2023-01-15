#include<stdio.h>
#include<conio.h>
int sum(int a,int b)
{
   int c;
	c=a+b;
   return c;
}
void main()
{  int x,y,z;
   clrscr();
	printf("Enter values as a+b : ");
	scanf("%d+%d",&x,&y);

	z = sum(x,y); //
	printf("%d + %d = %d\n",x,y,z);

   getch();
}