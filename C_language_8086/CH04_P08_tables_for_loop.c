/**
 * 
 *  4x1=2  5x1=5
 *  
 */
#include<stdio.h>
int main()
{
    int i,j,start,end,n;


    printf("Enter the start-end : ");
    scanf("%d-%d",&start,&end);


    for(i=1;i<=10;i++)
    {
            for(j=start;j<=end;j++)
            {
                n = j;
                printf("%2d x %2d = %2d\t",n,i,n*i);
            }
            printf("\n");
    }

    return 0;
}