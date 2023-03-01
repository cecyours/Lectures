
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char password[] = "123@me";
    char username[] = "aalam";
    char ch;
    char name[100],pass[100];

    printf("enter username : ");
    scanf("%s",name);

    printf("enter password : ");
    scanf("%s",pass);



    if(strcmp(username,name)==0 && strcmp(pass,password)==0)
    {
        printf("welcome..");

    }
    else
    {

        printf("try again...");
        scanf("%c",&ch);
        scanf("%c",&ch);

        if(ch=='Y' || ch=='y')

        {
            system("clear");
            system("gcc P06.c -0 ./hell && ./hell"); 

        }

    }



    return 0;
}