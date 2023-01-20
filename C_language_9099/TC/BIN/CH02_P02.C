#include<stdio.h>
#include<conio.h>
extern int e=1; // global+value

void main()
{
	auto int a;  // local
	register int r; //local
	static int s; // local + gloabal


clrscr();
	   printf("    auto : %d\n",a);
	   printf("register : %d\n",r);
	   printf("  extern : %d\n",e);
	   printf("  static : %d\n",s);
getch();
}