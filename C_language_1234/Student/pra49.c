#include<stdio.h>
int main()
{
    int a[10][10][10];
    int i1,i2,i3;
    int n1,n2,n3;
    int counter = 0;

    printf("enter configurations [t-r-c] : ");
    scanf("%d-%d-%d",&n1,&n2,&n3);


    for(i1=0;i1<=n1;i1++)
    {
        for(i2=0;i2<=n2;i2++)
        {
            for(i3=0;i3<=n3;i3++)
            {
                a[i1][i2][i3] = ++counter;
            }
        }
    }


    printf("==============================\n");

    for(i1=0;i1<n1;i1++)
    {
        for(i2=0;i2<n2;i2++)
        {
            printf("|");
            for(i3=0;i3<n3;i3++)
            {
                printf("%3d",a[i1][i2][i3]);
            }
            printf("| \n");
        }
        printf("------------------------\n");
    }
    return 0;
}