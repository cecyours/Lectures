#include<stdio.h>

void swap(int *a,int *b)
{
    int c;

    c  = *a;
    *a = *b;
    *b =  c;

    printf("ph- a : %d\t b : %d\n",*a,*b);
}

int main()
{
    int a,b;

    printf("enter 2 number : ");
    scanf("%d,%d",&a,&b);

    printf("ph1 a : %d\t b : %d\n",a,b);

    swap(&a,&b);

    printf("ph2 a : %d\t b : %d\n",a,b);
}