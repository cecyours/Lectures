#include<stdio.h>
int main()
{
    int start,end,n,i,j;

    printf("Enter 2 numbers : ");
    scanf("%d,%d",&start,&end);

    for(i=start;i<=end;i++)
    {
        printf("\n ---------- %d ---------------- \n",i);
        n = i;

        for(j=1;j<=10;j++)
        {
            printf("%d x %d = %d\n",n,j,n*j);
        }
    }
    return 0;
}