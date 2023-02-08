#include<stdio.h>
int main()
{
    float marks;

    printf("enter the marks :");
    scanf("%f",&marks);

    if(marks>=33 && marks<=100)
    {
        printf("passed");

    }
    else
    {
        printf("failed..");
    }
    return(0);
}