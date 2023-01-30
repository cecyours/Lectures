#include<stdio.h>
int main()
{
    int num,sum=0;

    while(sum<=1000)
    {
        printf("enter a number : ");
        scanf("%d",&num);

        sum +=num;

        printf("sum : %d\n",sum);
    }

    printf("final sum : %d\n",sum);

    return 0;
}