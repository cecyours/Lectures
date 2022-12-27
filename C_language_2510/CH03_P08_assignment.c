
#include<stdio.h>
int main()
{
    int a=10;
    
    a += 30; // a = a+30
    printf("your number %d after += : ",a); //40

    a-=5; // a = a- 5
    printf("your number %d after -= : ",a); //35

    a*=2; // a = a* 2
    printf("your number %d after *= : ",a); //70
    
    a/=7; // a = a/ 7
    printf("your number %d after /= : ",a); //10

    a%=3; // a = a% 3
    printf("your number %d after %= : ",a); //
    
}