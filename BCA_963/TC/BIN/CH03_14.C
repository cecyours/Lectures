#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
clrscr();
	printf("Enter 2 numbers : ");
	scanf("%d,%d",&a,&b);

	c = a & b;  //bitwise AND( & )
	printf("%d & %d = %d \n",a,b,c);

	c = a | b;  //bitwise OR( | )
	printf("%d | %d = %d \n",a,b,c);

	c = a ^ b;  //bitwise Ex-OR( ^ )
	printf("%d ^ %d = %d \n",a,b,c);

	c = ~a;     //bitwise negation
	printf("  ~ %d = %d \n",a,c);

	c = a << b;  //bitwise left-shift
	printf("%d << %d = %d \n",a,b,c);

	c = a >> b;  //bitwise right-shift
	printf("%d >> %d = %d \n",a,b,c);
getch();
}