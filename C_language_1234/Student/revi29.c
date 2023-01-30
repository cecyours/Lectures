#include<stdio.h>
int main()
{
    int a[100],n,i;

    printf("enter the size : ");
    scanf("%d",&n);

    printf("enter the array \n");

    for(i=0;i<n;i++)
    {
        printf("enter a[ %d ] = ",i);
        scanf("%d",&a[i]);
    }

    printf("-----------------------\n");
    for(i=0;i<n;i++)
    {
        printf("a [ %d ] = %d\n",i,a[i]);
    }
    return 0;
}