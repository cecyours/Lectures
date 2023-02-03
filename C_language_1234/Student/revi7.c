#include<stdio.h>
int main()
{
    int a=10;

    a += 30;
    printf("your number %d after += : ",a);

    a -=5;
    printf("your number %d after -= : ",a);

    a *=2;
    printf("your number %d after *= : ",a);

    a /=7;
    printf("your number %d after /= : ",a);

    a %=3;
    printf("your number %d after %= : ",a);


    return 0;
}