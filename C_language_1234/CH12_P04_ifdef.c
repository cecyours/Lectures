

#include<stdio.h>

#define A 89
int main()
{

    #ifdef A
        printf("A is defined...");
    #endif

    // #undef A

    #ifndef A
        #error "I am error..."
    #endif
}