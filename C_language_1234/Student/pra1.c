#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    

        printf("do you want exit : ");
        scanf("%c",&ch);


        if(!(ch=='y'))
        {
          
            printf("true : good bye... ");
            exit(0);
        }   

        else
        {
            printf("false : how are you... ");
        }

        printf("\ni am the coder... ");
        return 0;
}