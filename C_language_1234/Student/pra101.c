#include<stdio.h>

int main()
{
    FILE *fp;
    char name[100];

    fp = fopen("gamer.txt","a");

    printf("enter  your name : ");
    scanf("%s",name);

    fprintf(fp,"your name : %s\n",name);

    printf("data insreted...");

    fclose(fp);

    return 0;
}