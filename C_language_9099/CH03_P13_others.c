
#include<stdio.h>
int main()
{
    int a = 10;
    int *p; //pointer

    printf("%d at address : %p = %u \n",a,&a,&a);

    p = &a;
    printf("%d at address : %p = %u\n",*p,p,p);

}