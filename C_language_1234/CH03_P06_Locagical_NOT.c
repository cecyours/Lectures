
#include<stdio.h>
#include<stdlib.h>
int main()
{

    char ch;

    printf("Do you want exit : ");
    scanf("%c",&ch);

    if(!(ch=='y'))
    {
        exit(0);
        printf(" true : Good bye... ");
    }
    else{
        printf("false : how are you...");
    }

    printf("\nI am the Coder..");
    return 0;
}