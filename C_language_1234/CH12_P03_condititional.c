#include<stdio.h>

#define A 10
#define B 20

#define DAY 2

int main()
{

    #if A>B
        printf("%d is max\n",A);
    #else
        printf("%d is min\n",B);
    #endif

    #if DAY==1
        printf("Monday");
    #elif DAY == 2
        printf("Tuesday");
    #else   
        printf("None");   
    #endif
}