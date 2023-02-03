#include<stdio.h>
void sum()
{
    int x,y;

    printf("enter a and y\n");
    scanf("%d,%d",&x,&y);
    printf("sum of %d and %d is : %d",x,y,x+y);
}

int main()
{
    sum();

    return 0;
}