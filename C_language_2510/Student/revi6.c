#include<stdio.h>
int main()
{
    int a = 7;
    int b = 3;
    int c;

    c = a&b;
    printf("%d & %d = %d\n",a,b,c);

    c = a|b;
    printf("%d | %d = %d\n",a,b,c);

    c = a^b;
    printf("%d ^ %d = %d\n",a,b,c);

    c = -a;
    printf("-%d = %d\n",a,c);

    return 0;
    
}