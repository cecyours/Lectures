#include<stdio.h>

int main()
{
    int a=50,b=60,c=70;

    int *ptr = &a;
    
    printf("with a : %d at %u\t,%d at %u\n",a,&a,*ptr,ptr);

    ptr--;
    printf("with b : %d at %u\t,%d at %u\n",b,&b,*ptr,ptr);

    ptr--;
    printf("with c : %d at %u\t,%d at %u\n",c,&c,*ptr,ptr);

    return 0;
}