#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;

    printf("enter the size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter the a[ %d ] = ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum = sum+a[i];
    }

    printf("sum : %d\n",sum);

    return 0;
}
