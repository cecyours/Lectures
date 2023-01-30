#include<stdio.h>
int main()
{
    char ch;

    printf("do you want exit : ");
    scanf("%c",&ch);
    if(!(ch=='y'))
    {
        printf(" true   : you are right bro...");
    }
    else
    {
        printf(" false  : you are wrong bro...");
    }

    printf("\n i am the coder ...");

    return 0;
}