
#include<stdio.h>

int main()
{

    int n;
    int i,j;

    printf("enter the size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf(" \u2234 ");

        printf("\n");
    }
    return 0;
}