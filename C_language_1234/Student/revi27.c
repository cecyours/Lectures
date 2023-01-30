#include<stdio.h>
int main()
{
    printf("line 1\n");
    printf("line 2\n");
    printf("line 3\n");
    printf("line 4\n");

    goto code;

    printf("line 5\n");
    printf("line 6\n");
    printf("line 7\n");
    printf("line 8\n");

    code:

    printf("line 9\n");
    printf("line 10\n");
    printf("line 11\n");
    printf("line 12\n");

    return 0;
}