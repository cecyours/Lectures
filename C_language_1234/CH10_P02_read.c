
#include<stdio.h>
int main()
{
     
     FILE *file;
     char fileName[100],ch;

        printf("Enter file name : ");
        scanf("%s",fileName);
        
        file = fopen(fileName,"a+");

        printf("data in file : \n");

    while((ch=fgetc(file))!=-1)
    {
        printf("%c",ch);
    }
    return 0;
}