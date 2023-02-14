#include<stdio.h>

void main()
{
    int arr[10];
    int i;

        printf("\n\n read and print elements of an array :\n");
        printf("------------------------------------------\n");

    printf("input 3 elements in the array : \n");
    for(i=0;i<3;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nelements in array are : ");
    for(i=0;i<3;i++)
    {
        printf("%d",arr[i]);
    }

    printf("\n");
    
}