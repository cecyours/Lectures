#include<stdio.h>
int main()
{
    int a=10;

    a += 30;// a = a+30
    printf("your number %d after +=\n : ",a);//40

    a -=15;// a = a-15
    printf("your number %d after -=\n : ",a);//25

    a *=3;// a = a*3
    printf("your number %d after *=\n : ",a);//75

    a /=2;// a = a/2
    printf("your number %d after /=\n : ",a);//37

    a %=3;// a = a%3
    printf("your number %d after %=\n : ",a);//1

    return 0;
}