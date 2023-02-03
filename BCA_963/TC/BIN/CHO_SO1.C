#include<stdio.h>
#include<conio.h>

struct Task
{
	int a,b,c;
};
void sum(struct Task t)
{
       t.c = t.a + t.b;
       printf("%d + %d = %d\n",t.a,t.b,t.c);
}

void sub(struct Task t)
{
	t.c = t.a - t.b;
	printf("%d - %d = %d\n",t.a,t.b,t.c);
}

void mul(struct Task s)
{
	s.c = s.a * s.b;
	printf("%d * %d = %d\n",s.a,s.b,s.c);
}
void div(struct Task d)
{
	d.c = d.a / d.b;
	printf("%d / %d = %d\n",d.a,d.b,d.c);
}
void mod(struct Task p)
{
	p.c = p.a % p.b;
	printf("%d % %d = %d\n",p.a,p.b,p.c);
}
void main()
{
	struct Task m;
clrscr();
	m.a = 100;
	m.b = 20;
	m.c = m.a+m.b;
	m.c = m.a - m.b;
	m.c = m.a * m.b;
	m.c = m.a / m.b;
	m.c = m.a % m.b;

	sum(m);
	sub(m);
	mul(m);
	div(m);
	mod(m);

getch();
}