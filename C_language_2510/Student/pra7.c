
#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a=10,b=20,max,mini;

    max = (a>b)?a:b;

    printf("max : %d\n",max);

    mini = (a<b)?a:b;
    printf("mini : %d\n",mini);

    return 0;
}