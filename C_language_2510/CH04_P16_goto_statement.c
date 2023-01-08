
#include<stdio.h>
int main()
{

    printf("Line 1\n");
    printf("Line 2\n");
    printf("Line 3\n");

    code:
    printf("Line 4- -\n");
    printf("Line 5  - -- \n");
    printf("Line 6- -- -\n");
    printf("Line 7- - - -\n");

    goto code;
    printf("Line 8\n");
    printf("Line 9\n");
    printf("Line 10\n");

    return 0;
}