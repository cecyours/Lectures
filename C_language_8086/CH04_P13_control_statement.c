#include<stdio.h>
#include<stdlib.h>
int main()
{

    int i;
    char ch;
    
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
            // break;
            continue; //skip
        printf("line %d\n",i);
    }
    printf("do you want to exit : ");
    scanf("%c",&ch);
        if(ch=='y' || ch=='Y')
            exit(0);
            // #incluinttdlib.h>
        printf("hello word");
    return 'A';
}