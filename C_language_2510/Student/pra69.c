#include<stdio.h>
#include<string.h>

void display_name(char name[])
{
    int i,len;

    len = strlen(name);

    for(i=len-1;i>=0;i--)
    {
        printf("%c\n",name[i]);
    }
}


int main()
{
    char name[100];

    printf("enter your name : ");
    scanf("%S",name);

    display_name(name);
}