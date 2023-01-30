#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int x,y,z;

    printf("enter 2 numbers : ");
    scanf("%d,%d",&x,&y);

    z = sum(x,y);

    printf("%d + %d = %d\n",x,y,z);
}