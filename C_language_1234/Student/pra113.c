#include<stdio.h>
int main()
{
    FILE *fp;

    char name[100];

    fp = fopen("ch10_file.txt","a");

    printf("enter your name : ");
    scanf("%s",name);

    fprintf(fp,"your name : %s\n",name);
    printf("data inserted...");
    fclose(fp);

    return 0;
}