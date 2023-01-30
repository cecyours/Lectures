#include<stdio.h>
int main()
{
    int a,b,max;

    printf("enter 2 number : ");
    scanf("%d-%d",&a,&b);

    max = (a>b)?a:b;

    printf("max is : %d",max);

    return 0;
}