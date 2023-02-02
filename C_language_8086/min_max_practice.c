#include<stdio.h>
int main()
{
    int a[100],i,min,max,n;

    printf("Enter the size : ");
    scanf("%d",&n);

    printf("Enter the array :");
    for(i=0;i<n;i++)

    {
    printf("a [ %d ] = ",i );
    scanf("%d" ,&a[i]);
    }
    
    printf("------------------\n");

    min =a[0];
    max =a[0];

    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min = a[i];
        }
        if(max<a[i])
        {
            max = a[i];
        }

    }

    printf("min : %d\n",min);
    printf("max : %d\n",max);


}