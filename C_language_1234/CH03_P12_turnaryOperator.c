
#include<stdio.h>
#include <stdbool.h>

int main()
{

    int a=10,b=34,max,mini;

    // (23>4)?printf("Hello"):printf("Bye");

    max = (a>b)?a:b;

    printf("max : %d\n",max);

    mini = (a<b)?a:b;
    printf("mini : %d\n",mini);
}