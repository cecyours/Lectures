#include<stdio.h>
int main()
{
    int a = 14;
    int b = 6;
    int c;

    c = a&b;
    printf("%d & %d = %d\n",a,b,c);


    c = a|b;
    printf("%d | %d = %d\n",a,b,c);


    return 0;
}