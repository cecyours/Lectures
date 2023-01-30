
#include<stdio.h>
int main()
{
    int a[100],n,i;

    printf("Enter the size : ");
    scanf("%d",&n);

    printf("Enter the array \n");
    
    for(i=0;i<n;i++)
    {
        printf("Enter a[ %d ] = ",i);
        scanf("%d",&a[i]);
    }

    printf("---------------------\n");
    for(i=0;i<n;i++)
    {
        printf("a [ %d ] = %d\n",i,a[i]);
    }
    return 0;
}