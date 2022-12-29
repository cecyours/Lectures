#include<stdio.h>

int main()
{

    char ch;

    printf("enter your character");
    scanf("%c",&ch);


    if(ch=='y' || ch=='s')
    {
        printf("welcome ....");
    }

    else
    {
        printf("bye bye ...");
    }

return(0);


}