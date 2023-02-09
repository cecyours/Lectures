<<<<<<< HEAD
#include<stdio.h>
void main()
{

    char ch;

    printf("Enter the character : ");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("letter alphabet...");
    }
    else 
    {
        printf("other symbol.. ");
    }

=======

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;

    printf("do you want to exit : ");
    scanf("%c",&ch);

    if(ch=='y' || ch=='Y')
    {
        printf("exit...");
        exit(0);
    }
    
    printf("welcome..");
>>>>>>> b74aa75a356d8d8e83a10a217c9ae28386606604
}