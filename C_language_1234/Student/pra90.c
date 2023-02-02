#include<stdio.h>

void main()
{
    int arr1[1], arr2[100];
    int i,n;

    printf("\n\n copy the elements one array into another array : \n");
    printf("------------------------------------------------------\n");

    printf("input the number of elements to be stored in the : ");
    scanf("%d",&n);

    printf("input %d elements in the array : \n",n);
    for(i=0;i<n;i++)
    {
        printf("elements - %d : ",i);
        scanf("%d",&arr1[i]);
    }

    for(i=0;i<n;i++)
    {
        arr2[i] = arr1[i];
    }

    printf("\n\nthe elements copied into the first array are : \n");
    for(i=0;i<n;i++)
    {
        printf("% 5d", arr1[i]);
    }
    printf("\n\nthe elements copied into the second array are : \n");
    for(i=0;i<n;i++)
    {
        printf("% 5d", arr2[i]);
    }

    printf("\n\n");
}