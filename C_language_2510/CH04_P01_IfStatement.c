
#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    if(num%10==0)
        printf("Hello world... %d is div by 10..",num);

}