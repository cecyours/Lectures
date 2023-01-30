#include<stdio.h>
int main()
{
    float marks;

    printf("enter your marks : ");
    scanf("%f",&marks);

    if(marks>= 34 && marks<=100)
    {
        printf("pass...");
    }
    else
    {
        printf("fail : better luck next time...");
    }

    return 0;
}