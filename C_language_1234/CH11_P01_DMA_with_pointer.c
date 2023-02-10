
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int i,n;

    printf("Enter the size : ");
    scanf("%d",&n);

    // p = (int *)malloc(sizeof(int)*n);
    p = (int *)calloc(n,sizeof(int));

    printf("Enter elements : \n");

    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",p+i);
    }

    printf("\n--------elements----------\n");

    printf("elements : ");

    for(i=0;i<n-1;i++)
    {
        printf("%d, ",*(p+i));
    }
    
    printf("%d.",*(p+i));

}