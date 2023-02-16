#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;

        printf("Do you want to exit[y/n] : ");
        scanf("%c",&ch);

        if(ch=='Y' || ch=='y')
        {
            // TODO: exit to programm..
            exit(0);
        }


        printf("Hello World......");

    return 0;
}