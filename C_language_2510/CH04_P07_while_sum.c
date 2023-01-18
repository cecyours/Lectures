
#include<stdio.h>
int main()
{

    int num,sum=0;

    while(sum<=100)
    {
        printf("Enter a number : ");
        scanf("%d",&num);

        sum +=num; //sum = sum+num

        printf("sum : %d\n",sum);
    }

    printf("final sum : %d\n",sum);

    return 0;
}