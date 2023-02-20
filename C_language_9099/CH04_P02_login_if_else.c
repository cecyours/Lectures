
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main()
{

    char password[] = "124@me";
    char username[] = "aalam";
    char ch;
    char name[100],pass[100];

    printf("Enter username : ");
    scanf("%s",name);


    printf("Enter password : ");
    scanf("%s",pass);

    // printf("data : %s, %s\n",name,pass);

    if(strcmp(username,name)==0 && strcmp(pass,password))
    {
        printf("welcome ...");
    }
    else
    {

        printf("Try again .. ");
        scanf("%c",&ch);
        scanf("%c",&ch);

        if(ch=='Y' || ch=='y')
        { 

            system("clear");
            system("gcc CH04_P02_login_if_else.c -o ./hell && ./hell");
        }



    }
    return 0;
}