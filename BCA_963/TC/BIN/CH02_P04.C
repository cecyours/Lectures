#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,*pa,*pb,*pc;

clrscr();
	pa=&a;
	pb=&b;
	pc=&c;

	printf("Enter number :");
	scanf("%d,%d",&a,&b);

	*pc=*pa+*pb;
	printf("%d + %d = %d\n",a,b,c);

	*pc = *pa - *pb;
	printf("%d - %d = %d\n",a,b,c);
getch();
}