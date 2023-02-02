#include<stdio.h>
#include<conio.h>
 extern int e=2;   // global + value



void main()
{
		auto int a;   //local
		register int r;  //local
		static int s;  //local + global




 clrscr();
	 printf("   auto : %d\n",a);
	 printf("register ; %d\n",r);
	 printf("static : %d\n",s);
	 printf("extern : %d\n",e);

 getch();

}
