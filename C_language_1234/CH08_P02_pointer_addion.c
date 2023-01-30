
#include<stdio.h>

int main()
{
    int a=10,b=20,c=30;

    int *ptr = &a;

    printf("With a : %d at %u\t ,%d at %u\n",a,&a,*ptr,ptr);

    ptr--;
    printf("With b : %d at %u\t ,%d at %u\n",b,&b,*ptr,ptr);

    ptr--;
    printf("With c : %d at %u\t ,%d at %u\n",c,&c,*ptr,ptr);

    
return 0;
}
