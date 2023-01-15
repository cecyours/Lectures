#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
clrscr();
	 printf("Enter 2 numbers : ");
	 scanf("%d,%d",&a,&b);

	 if(a>b) //'a>b' is condition
	 {
		//true block
		printf("a is max : %d\n",a);
	 }
	 else
	 {      //false block
		printf("b is max : %d\n",b);
	 }
getch();
}