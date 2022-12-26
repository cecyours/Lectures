
#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter your numbers : ");
    scanf("%d,%d",&a,&b);

    if(a>b)
    {
        printf("%d is max than %d\n",a,b);
    }

    printf("\n------------------------\n\n");

    if(a>=b)
    {
        printf("%d is greater than or equals to %d\n",a,b);
    }
     

}