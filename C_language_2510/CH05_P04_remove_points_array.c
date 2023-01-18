
#include<stdio.h>
int main()
{
    float a[100];
    int b[100],n,i;

    printf("Enter the size : ");
    scanf("%d",&n);

    printf("Enter float array : \n");
    for(i=0;i<n;i++)
    {
        printf(" a [ %d ] = ",i);
        scanf("%f",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        b[i] = (int)a[i];

        printf("%f\t%d\n",a[i],b[i]);
    }
 
    return 0;
}