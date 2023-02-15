
#include<stdio.h>
void main()
{
    int a,b,max;

    printf("Enter the numbers : ");
    scanf("%d,%d",&a,&b);

    max = (a>b)?a:b;


    printf("max : %d\n",max);
    return;
}