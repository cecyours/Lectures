#include<stdio.h>
int main()
{
    int a,*ptr;

    printf("enter the number : ");
    scanf("%d",&a);

    ptr = &a;

    printf("using ptr : %d\n",*ptr);
    printf("  using a : %d\n",a);

    printf("squre of  : %d\n",(a**ptr));

    return 0;
}