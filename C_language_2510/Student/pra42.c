#include<stdio.h>
int main()
{
    int number,square;
    printf("please enter any integer value : ");
    scanf("%d",&number);

    square = number * number;

    printf("square of a given number %d is = %d",number,square);

    return 0;
}