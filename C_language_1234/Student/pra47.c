
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j;
    int n,m;

    printf("enter rowXcolumn : ");
    scanf("%dx%d",&n,&m);

    printf("enter 1st matrix : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    printf("enter 2nd matrix : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }




    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j] = a[i][j]+b[i][j];
        }
    }



    
    printf("your 3rd matrix : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%2d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}