#include<stdio.h>
int main()
{
    float marks;

    printf("enter your marks : ");
    scanf("%f",&marks);

    if(marks>=90 && marks<=100)
    {
        printf("A+");
    }
    else if(marks>=70 && marks<=89)
    {
        printf("A");
    }
    else if(marks>=50 && marks<=69)
    {
        printf("B");
    }
    else if(marks>=34 && marks<=49)
    {
        printf("C");
    }
    else if(marks>=01 && marks<=33)
    {
        printf("F");
    }
    return 0;
}