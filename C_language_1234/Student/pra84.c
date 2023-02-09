#include<stdio.h>

void main()
{
    int a[100];
    int n,i,*p;

    p =&a[0];

    printf("enter the size : ");
    scanf("%d",&n);

    printf("enter the size : ");

    for(i=0;i<n;i++)
    {
        printf("enter data for a[ %d ]  =  ",i);
        scanf("%d",&a[i]);
    }

    printf("---------------------\n");

    for(i=0;i<n;i++)
    {
        printf("a [ %d\t ]  =  %d\n",i,*(p+i));
    }
}