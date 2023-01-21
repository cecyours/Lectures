
#include<stdio.h>
int main()
{
    int i,end,counter=0,j;

    printf("Enter end : ");
    scanf("%d",&end);

    for(i=1;i<=end;i+=2)
    {
        for(j=1;j<=counter;j++)
        {
            printf("|_");
        }

        printf("%d\n",i);

        if(counter%10==0)
            counter=0;
        counter++;
    }
    return 0;
}