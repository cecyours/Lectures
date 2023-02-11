#include<stdio.h>

#define A 20
#define B 20

int main()
{
    #if A==B
        printf("both are equals\n");
    #else
        printf("both are unique\n");
    #endif
}
