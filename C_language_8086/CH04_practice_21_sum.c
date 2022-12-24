#include<stdio.h>
int main()
{
    int sum=0;
    int num;

    while(sum<=21)
    {
        printf("enter the number : ");
        scanf("%d",&num);
    
        sum =sum + num;
        printf("current sum : %d\n",sum);
        
    }


}