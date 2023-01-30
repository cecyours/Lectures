
#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;

    ptr = &a;

    printf("With variable : %d at %p\n",a,&a);
    printf(" With pointer : %d at %p\n",*ptr,ptr);
    
    return 0;
}