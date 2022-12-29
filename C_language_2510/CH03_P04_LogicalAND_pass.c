#include<stdio.h>
int main()
{
    float marks;

    printf("Enter your marks : ");
    scanf("%f",&marks);

    if(marks>= 34 && marks<=100)
    {
        printf("Pass..");
    }
    else
    {
        printf("failed : better luck next time..");
    }
}