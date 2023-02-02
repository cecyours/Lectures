#include<stdio.h>

int main()
{
    int a=10;
    int *ptr;

    ptr = &a;

    printf("with variable : %d at %p\n",a,&a);
    printf("with pointr   : %d at %p\n",*ptr,ptr);

    return 0;
}