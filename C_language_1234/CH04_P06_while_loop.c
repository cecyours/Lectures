
#include<stdio.h>
int main()
{
    int i=0,num;

    printf("Enter the end number : ");
    scanf("%d",&num);

    while(i<=num)
    {
        printf("\ndata : %d",i);
        i++;
    }
    return 0;
}