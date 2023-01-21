
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter 3 number : ");
    scanf("%d,%d,%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is max..",a);
        }
        else
        {
            printf("%d is max....",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is max...",b);
        }
        else
        {
            printf("%d is max....",c);
        }
    }
    
    return 3;
}