
#include<stdlib.h>
#include<stdio.h>
int main()
{


    int n;
    int a,b;
    printf("Enter the number : ");
    scanf("%d",&n);

    while(n>0)
    {
        printf("Enter expression : ");
        scanf("%d,%d",&a,&b);
        system("clear");

        
        printf("%d + %d = %d \n",a,b,a+b);
        n--;
        
    }

    return 0;
}