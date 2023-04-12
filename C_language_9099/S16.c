#include<stdio.h>
int main()
{
    printf("line 1 : \n");
    printf("line 2 : \n");
    //goto hell;
    hell:
    printf("line 3 : \n");
    printf("line 4 : \n");
    printf("line 5 : \n");
    //hell:
    goto hell;
    printf("line 6 : \n");
    printf("line 7 : \n");
    printf("line 8 : \n");
    printf("line 9 : \n");


    return 0;
}