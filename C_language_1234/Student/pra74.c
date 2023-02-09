#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("shivam.txt","w");

    fprintf(fp,"Hello World.");   
    return 0;

}