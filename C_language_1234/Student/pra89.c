#include<stdio.h>

void main()
{
    int a[100];
    int i,n,sum=0;

    printf("\n\nfind sum of all elements of array : \n");
    printf("----------------------------------------\n");

    printf("input the number of elements to be stored in the array : ");
    scanf("%d",&n);

    printf("input %d elements in the array : \n",n);
    for(i=0;i<n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum += a[i];
    }

    printf("sum off all elements store in the array is : %d\n\n",sum);
}