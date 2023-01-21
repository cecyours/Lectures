#include<stdio.h>
int main()
{
    printf("line 1");
    printf("line 2");
    printf("line 3");
    printf("line 4");

    goto code;
    printf("line 5");
    printf("line 6");
    printf("line 7");
    printf("line 8");

    code:
    printf("line 9");
    printf("line 10");
    printf("line 11");
    printf("line 12");

    return 0;
}