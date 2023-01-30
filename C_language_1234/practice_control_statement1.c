#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number for a & b");
    scanf("%d-%d",&a,&b);
    if(a!=b)
    {
        printf("%d is not eqal to %d",a,b);

        if(a>b)
        {
            printf("%d is greater than %d",a,b);
        }
        else 
        {
            printf("%d is less than %d",a,b);
        }
    }
    else 
    {
        printf("%d is eqal to %d",a,b);
    }
}