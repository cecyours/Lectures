#include<stdio.h>
int main()
{ 
    int a[50],i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
     printf("\nNow enterr the value of array %d of size:\n",n);
    for(i=0;i<n;i++)
    {
        printf("a[ %d ]=",i);
     scanf("%d",&a[i]);   
    }
    for(i=0;i<n;i++)
    {
     printf(" [ %d ]  =  %d\n",i,a[i]);
    }
    printf("-------------------------\n");





    return 0;

}