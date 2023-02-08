#include<stdio.h>
int main()
{
    int number;
    printf("enter a number : ");
    scanf("%d",&number);

    if(number%3==0 || number%5==0)
    {
        printf("welcome");
    }
    else
    {
        printf("by by..");
    }

}