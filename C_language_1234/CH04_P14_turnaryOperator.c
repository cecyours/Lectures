
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,max;

        printf("Enter 2 numbers : ");
        scanf("%d-%d",&a,&b);

        max = (a>b)?a:b;
        // (condition)? exp1 : exp2

        printf("max is : %d",max);

    return 0;
}