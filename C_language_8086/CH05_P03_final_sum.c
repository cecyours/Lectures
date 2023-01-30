
#include<stdio.h>

int main()
{
    int a[100],i,n,sum=0;

    printf("Enter your number as size : ");
    scanf("%d",&n);

    printf("Enter data : \n");

    for(i=0;i<n;i++)
    {
        printf("a [ %d ] = ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("a[ %d ] = %d\n",i,a[i]);
        sum = sum+a[i];
    }

    printf("final sum : %d\n",sum);
}