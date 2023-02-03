#include<stdio.h>
#include<conio.h>
struct Task{
   int a,b,c;
};

void sum(struct Task t)
{
	t.c = t.a+t.b;
	printf("%d + %d = %d\n",t.a,t.b,t.c);
}

void sub(struct Task t)
{
	t.c = t.a-t.b;
	printf("%d - %d = %d\n",t.a,t.b,t.c);
}

void main()
{
	struct Task m;
clrscr();
	 m.a = 100;
	 m.b = 20;
	 m.c = m.a+m.b;

	 sum(m);
	 sub(m);

getch();
}