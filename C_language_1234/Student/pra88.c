#include<stdio.h>

void main()
{
    int i,n,a[100];

    printf("\n\n read a number of values in an array and display it in reverse order : \n");
    printf("---------------------------------------------------------------------------\n");

    printf("input the number of elements to store in the array : ");
    scanf("%d",&n);
    
    printf("input %d number of element in the array : \n",n);
    for(i=0;i<n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }

    printf("\nthe value store into the array : \n");
    for(i=0;i<n;i++)
    {
        printf("% 5d",a[i]);
    }

    printf("\n\nthe values store into the array in reverse are : \n");
    for(i=n-1;i>=0;i--)
    {
        printf("% 5d",a[i]);
    }

    printf("\n\n");
}