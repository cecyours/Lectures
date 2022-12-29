#include<stdio.h>
int main()
{
    int num;
    printf("enter an integer : ");
    scanf("%d",&num);

    if(num % 5 == 0)
        printf("welcome");
    else
        printf("Jan bhai tu kaam kr");
    

    return(0);
}