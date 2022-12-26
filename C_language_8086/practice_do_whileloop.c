#include<stdio.h>
int main()
{
    int sum=0,num;
    do{
        printf("Enter the amount : ");
        scanf("%d",&num);

        sum = sum+num;
        printf("sum : %d\n",sum);
        
    }while(sum<100);

    printf("final sum : %d\n",sum);
}