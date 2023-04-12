#include<stdio.h>
int main()
{
    int a[50],i,r,k;
    printf("enter the size of array:");
    scanf("%d",&r);
    printf("\nEnter elements\n");
    for(i=0;i<r;i++)
    {
        scanf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
        for(i=0;i<r;i++)
        {
            printf("a[%d]=%d\n",i,a[i]);
        }
         for(i=0;i<=k;i++)
        {
            k+=a[i];
        }
        printf("%d",k);
        printf("\nwith decrement\n\n");
    /* for(i=r-1;i>=0;i--)
        {
            printf("a[%d]=%d\n",i,a[i]);
             k+=a[i];
             printf("\n%d",k);
        }*/
return 0;
}