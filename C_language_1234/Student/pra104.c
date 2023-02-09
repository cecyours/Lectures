#include<stdio.h>

int main()
{
    FILE *filePointer;

    filePointer = fopen("test.txt","r");

    printf("the current location of file pointer is %d bytes from the start of the file\n",ftell(filePointer));

    fseek(filePointer,4,SEEK_SET);

    printf("the current location of file pointer is %d bytes from the start of the file\n",ftell(filePointer));


    fclose(filePointer);

    return 0;
}