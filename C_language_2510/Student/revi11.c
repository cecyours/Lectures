#include<stdio.h>
int main()
{
    int a=10,b=34,max,mini;

    max = (a>b)?a:b;
    printf("max : %d\n",max);

    mini = (a<b)?a:b;
    printf("mini : %d\n",mini);

    return 0;
}