#include<stdio.h>

int main()
{
    int a=10;
    int *ptr;

    ptr = &a;

    printf("with varriable : %d at %p\n",a,&a);
    printf("with pointer   : %d at %p\n",*ptr,ptr);

    return 0;
}