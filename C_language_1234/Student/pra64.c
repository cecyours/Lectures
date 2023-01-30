#include<stdio.h>

void reverse(char str[])
{
    int i,j,len;
    char temp;

    for(i=0;str[i];i++)
    len= i;

    for(i=0,j=len-1;i<j;i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void main()
{
    char name[200];

    printf("enter your name : ");
    scanf("%s",name);

    reverse(name);

    printf("welcome %s\n",name);
    
}
