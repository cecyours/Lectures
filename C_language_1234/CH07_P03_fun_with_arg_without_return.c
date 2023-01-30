
#include<stdio.h>
void sum(int a,int b)
{
    printf("%d + %d = %d\n",a,b,a+b);
}
int main()
{
    int x,y;

    printf("Enter 2 numbers : ");
    scanf("%d,%d",&x,&y);

    sum(y,10);
    sum(y,y);
    sum(x,y);
}