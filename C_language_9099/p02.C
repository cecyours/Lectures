
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n;
    int a,b;

    printf("enter the number : ");
    scanf("%d",&n);

    while(n>0)
    {
        printf("enter expresion : ");
        scanf("%d,%d",&a,&b);
        system("clear");


        printf("%d + %d = %d\n",a,b,a+b);
        printf("%d - %d = %d\n",a,b,a-b);
        printf("%d * %d = %d\n",a,b,a*b);
        printf("%d / %d = %d\n",a,b,a/b);
        printf("%d %% %d = %d\n",a,b,a%b);
        n--;
    }

    return 0;
}