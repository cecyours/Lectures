#include<stdio.h>

int main()
{
    FILE *file;
    char filename[100],ch;

        printf("enter file name : ");
        scanf("%s",filename);

        file = fopen(filename,"r");

        printf("data in file : \n");

    while((ch=fgetc(file))!=-1)
    {
        printf("%c",ch);
    }

    return 0;
}