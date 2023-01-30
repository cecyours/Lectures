#include<stdio.h>
void add();

int main()
{
    add();
    return 0;
}

void add()
{
    int a,b,c;
    printf("\n enter the value a & b : ");
    scanf("%d,%d",&a,&b);

    c = a+b;
    printf("\ntotal : %d",c);
}