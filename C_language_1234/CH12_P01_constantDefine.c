
#include<stdio.h>

#define A 100

int main()
{
    #undef A
    #define A 488

    printf("your value : %d\n",A);   
}