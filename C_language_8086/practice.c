#include<stdio.h>
int main()
{
    int i=0;

    printf("line 1\n");
    printf("line 2\n");
    printf("line 3\n");
    home:
    printf("line 4\n");
    printf("line 5\n");
    printf("line 6\n");
    printf("line 7\n");
    {
        goto home;
    }
    printf("line 8\n");
    printf("line 9\n");
    printf("line 10\n");


    return 0;
}