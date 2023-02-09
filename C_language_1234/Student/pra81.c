#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fptr;
    char fname[20];
    char str;

    printf("\n\n read an existing file : \n");
    printf("-------------------------------------\n");
    printf("input the filename to be opened : ");
    scanf("%s",fname);

    fptr = fopen(fname,"r");

    if(fptr == NULL)
    {
        printf("file does not exist or cannot be opened.\n");
        exit(0);
    }

    printf("\n the content of the file %s is :\n",fname);
    str = fgetc(fptr);
    while (str != EOF)
    {
        printf("%c",str);
        str = fgetc(fptr);
    }

    fclose(fptr);
    printf("\n\n");
}