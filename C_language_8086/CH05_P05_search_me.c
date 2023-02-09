
#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a[100],i,n,data;
    bool f=false;

    printf("Enter the size : ");
    scanf("%d",&n);

    printf(" Enter the data :\n");

    for(i=0;i<n;i++)
    {
        printf("a [ %d ] = ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter data to search : ");
    scanf("%d",&data);

    for(i=0;i<n;i++)
    {
        if(data==a[i])
        {
            f = true;
            printf("%d found at %d index...",data,i);
        }
    }

    if(!f)
    {
        printf("data not found..");
    }
}