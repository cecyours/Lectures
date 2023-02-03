#include<stdio.h>

int add();

int main()
{
    int a;
    a=add();
    printf("\ntotal : %d",a);
    return 0;
}

int add()
{
    int a,b;
    printf("\nenter the value of a & b : ");
    scanf("%d,%d",&a,&b);
    return a+b;
}