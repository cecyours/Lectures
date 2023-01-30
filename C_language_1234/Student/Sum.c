
#include<stdio.h>

void sum(int a,int b)
{
    printf("%d + %d = %d\n",a,b,a+b);
}
void sub(int a,int b)
{
    printf("%d - %d = %d\n",a,b,a-b);
}

void main()
{
    sum(1,2);
    sub(1,2);
}
