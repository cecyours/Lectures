
#include<stdio.h>
void main()
{
    int a,b,max,min;

    printf("Enter the numbers : ");
    scanf("%d,%d",&a,&b);

    max = (a>b)?a:b;

    min = (a<b)?a:b;

    (a==b)?printf("same\n"):printf("uniue.\n");


    printf("max : %d\n",max);
    printf("min : %d\n",min);
    return;
}

/* 
3*2-3/3+6
 */