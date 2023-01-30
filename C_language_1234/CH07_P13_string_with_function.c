

#include<stdio.h>
#include<string.h>

void display_name(char name[])
{
    int i,len;

    len = strlen(name); // length the String.

    for(i = len-1;i>=0;i--)
    {
        printf("%c\n",name[i]);
    }


}
int main()
{
    char name[100];
    
    printf("Enter your name : ");
    scanf("%s",name);

    display_name(name);
}