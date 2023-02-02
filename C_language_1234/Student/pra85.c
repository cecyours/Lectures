#include<stdio.h>

int main()
{
    int a=10,b=20,c=30;
    
    int *ptr = &a;

    printf("with a : %d at %u\t ,%d at %u\n",a,&a,*ptr,ptr);

    ptr--;
    printf("with b : %d at %u\t ,%d at %u\n",b,&b,*ptr,ptr);

    ptr--;
    printf("with c : %d at %u\t ,%d at %u\n",c,&c,*ptr,ptr);

    return 0;
}