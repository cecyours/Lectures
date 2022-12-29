#include<stdio.h>
int main()
{
    int start,end,i,n,j;
    printf("Enter start,end : ");
    scanf("%d,%d",&start,&end);

    for(i=start;i<=end;i++)
    {
        n = i;
        for(j=1;j<=10;j++)
        {
            printf("%2d x %2d = %2d\n",n,j,n*j);
        }
        printf("\n-----------------\n\n");
    }
    return 0;

}