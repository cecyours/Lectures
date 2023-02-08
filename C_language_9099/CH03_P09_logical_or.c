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

}