
#include<stdio.h>
void main()
{
    int a[100];
    int n,i,*p;

    p = &a[0];

    printf("Enter the size : ");
    scanf("%d",&n);

    printf("Enter the data : ");
    
    for(i=0;i<n;i++)
    {
        printf("Enter data for a[ %d ] = ",i);
        scanf("%d",&a[i]);
    }

    printf("--------------\n");

    for(i=0;i<n;i++)
    {
        printf("a[ %d ] = %d\n",i,*(p+i));
    }
}