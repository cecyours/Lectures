#include<stdio.h>
int main()
{
    int a[100];
    int i,n;

    printf("Enter the size : ");
    scanf("%d",&n);

    printf("Enter data : \n");

    for(i=0;i<n;i++)
    {
        printf("a [ %d ] = ",i);
        scanf("%d",&a[i]);
    }

    printf("-----------------\n");

    for(i=0;i<n;i++)
    {
        printf("a[ %d ] = %d\n",i,a[i]);
    }
}