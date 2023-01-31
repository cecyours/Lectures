#include<stdio.h>
#include<conio.h>

void sum(int a,int b)
{
	printf("%d + %d = %d\n",a,b,a+b);
}
void sub(int a,int b)
{
	printf("%d - %d = %d\n",a,b,a-b);
}
void mul(int p,int r)
{
     printf("%d * %d = %d\n",p,r,p*r);
}
void div(float q,float s)
{
	printf("%f / %f = %f",q,s,q/s);
}
void main()
{
       int a=10,b=3;
       int x=9,y=59;
clrscr();
       //	sum(10,8);
       //	sum(4,2);
	sum(9,7);
	sub(y,b);
	mul(2,6);
	div(3,9);
       //	sum(x,y);
getch();
}