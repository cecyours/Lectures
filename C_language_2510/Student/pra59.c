#include<stdio.h>
typedef int Length;

int main()
{
    Length num1,num2,sum;
    printf("enter the first number : ");
    scanf("%d",&num1);
    printf("enter the second number : ");
    scanf("%d",&num2);


    sum = num1 + num2;
    printf("the sum of the two number is %d",sum);

    return 0;
}