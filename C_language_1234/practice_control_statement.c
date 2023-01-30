#include<stdio.h>
int main()
{
    int i;
    char ch;

    for(i=1;i<=10;i++)
    {
        if(i%1==0)
        printf("line %d\n",i);
    }
    printf("do you want to exit : ");
    scanf("%c",&ch);
        if (ch=='y'|| ch=='Y')
        exit(0);
        printf("Computer Education Center");
    return '0';

}