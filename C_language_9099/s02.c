#include <stdio.h>

int main()
{

    int a = 10;

    a += 7;
    printf("new value after += %d\n", a);

    a -= 5;
    printf("new value after -= %d\n", a);

    a *= 4;
    printf("new value after *= %d\n", a);

    a /= 5;
    printf("new value after /= %d\n", a);

    a %= 2;
    printf("new value after %%= %d\n", a);

    return 0;
}