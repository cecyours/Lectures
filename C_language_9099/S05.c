
#include<stdio.h>
int main()
{
    int i,n;

    printf("enter the number : ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    printf("%3d x %3d = %3d\n",n,i,n*i);
    printf("----");

    return 0;
}