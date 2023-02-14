
#include<stdio.h>

int main()
{
    FILE *fp;
    char name[100];

    fp = fopen("CH10_file.txt","a");


    printf("Enter your name : ");
    scanf("%s",name);


    fprintf(fp,"your name : %s\n",name);

    printf("data inserted...");

    fclose(fp);
    
    return 0;
}