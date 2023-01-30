#include<stdio.h>
int main()
{
    int number,cube;

    printf("\n please enter any integer value : ");
    scanf("%d",&number);

    cube = number*number*number;

    printf("\n cube of a given number %d is = %d",number,cube);

    return 0;
}