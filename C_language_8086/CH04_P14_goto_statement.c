
#include<stdio.h>
int main()
{
    int i=0;

    printf("line 1\n");
    printf("line 2\n");
    printf("line 3\n");

    home:
    printf("\tline 4\n");
    printf("\tline 5\n");
    printf("\tline 6- %d\n",i+1);
    i++;
    if (i<10)
    {
        goto home;

    }
    printf("line 7\n");
    printf("line 8\n");

    return 0;
}