#include<stdio.h>
int main()
{
    float marks;

    printf("Enter the marks : ");
    scanf("%f",&marks);


    if(marks>=33 && marks<=100)
    {
        printf("passed");
    }
    else
    {
        printf("Failed..");
    }
    return 0;
}