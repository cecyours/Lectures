
#include<stdio.h>
int main()
{
    int a  = 10;

    
    a+=7; // a = a+5;
    printf("new value after += %d\n",a); //17

    a-=5;// a = a-5
    printf("new value after -= %d\n",a); // 12

    a*=2;// a = a*2
    printf("new value after *= %d\n",a); //24

    a/=8;// a=a/8
    printf("new value after /= %d\n",a); //3

    a%=2; // a= a%2
    printf("new value after %%= %d\n",a); // 1
    

    
    return 0;
}