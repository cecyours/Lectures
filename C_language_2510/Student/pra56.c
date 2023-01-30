#include<stdio.h>

void add(int,int);

int main()
{
    int a,b;

    printf("enter the value of A & B : ");
    scanf("%d,%d",&a,&b);

    add(a,b);
    return 0;
}

void add(int x,int y)
{
    int c;
    c = x+y;
    printf("\ntotal : %d",c);
}