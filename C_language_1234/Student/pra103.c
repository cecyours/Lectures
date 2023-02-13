#include<stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("filename","r");
 
    fseek(fp,0,SEEK_END);

    printf("%ld",ftell(fp));

    return 0;
}