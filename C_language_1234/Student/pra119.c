#include<stdio.h>

#define a 20
#define b 90

#define month 12

int main()
{
    #if a>b
        printf("%d is max\n",a);
    #else
        printf("%d is min\n",b);
    #endif

    #if months
        printf("january");
        printf("february");
        printf("march");
        printf("april");
        printf("may");
        printf("june");
        printf("july");
        printf("august");
        printf("september");
        printf("october");
        printf("november");
        printf("december");

    #elif month == 12
        printf("december");
    //#else
        //printf("None");
    #endif  
}