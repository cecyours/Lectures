#include<stdio.h>
void  main()
{
    int a,b,c;

    printf("enter 2 number :");
    scanf("%d,%d",&a,&b);

    c = a+b;
    printf("%d + %d = %d\n",a,b,c);

    c = a-b;
    printf("%d - %d = %d\n",a,b,c);

    c= a*b;
    printf("%d * %d = %d\n",a,b,c);

    c= a/b;
    printf("%d / %d = %d\n",a,b,c);

    c= a%b;
    printf("%d %% %d = %d\n",a,b,c);

}