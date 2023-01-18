#include<stdio.h>
int main()
{
    int n,i,j;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if((i+j)%2!=0)
             printf("\u2764 ");
            else 
             printf("   ");
        }
        printf("\n");
    }
    return 0;
}