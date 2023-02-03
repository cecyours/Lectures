
#include<stdio.h>

int sum()
{
    int a,b;
    printf("enter 2 numbers : ");
    scanf("%d,%d",&a,&b);

    return a+b;
}
int main()
{
    int c;

    c = sum();
    printf("your ans : %d\n",c);
}