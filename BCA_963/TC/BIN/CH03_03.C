#include<stdio.h>
#include<conio.h>
void main()
{
       int a,b;
clrscr();
	 printf("Enter 2 numbers : ");
	 scanf("%d,%d",&a,&b);

	 printf("%d >  %d : %d\n",a,b,a>b);  //greater than
	 printf("%d <  %d : %d\n",a,b,a<b);
	 printf("%d >= %d : %d\n",a,b,a>=b);
	 printf("%d <= %d : %d\n",a,b,a<=b);
	 printf("%d != %d : %d\n",a,b,a!=b);
	 printf("%d == %d : %d\n",a,b,a==b);
getch();
}