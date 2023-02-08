#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;

    printf("do you want to exit :");
    scanf("%c",&ch);

    if(ch=='y' || ch=='Y')
    {
        printf("exit...");
        exit(0);

    }
    
    printf("welcome..");

}