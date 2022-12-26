
#include<stdio.h>
int main()
{
    char ch;

    printf("Enter your character : ");
    scanf("%c",&ch);

    if(ch=='y' || ch=='s')
    {
        printf("welcome ...");
    }
    else
    {
        printf("Bye bye...");
    }

    return 0;
}