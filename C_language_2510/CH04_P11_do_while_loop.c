#include<stdio.h>
int main()
{

    char ch='y';
    
    int a,b;

    do{
        printf("Enter express : ");
        scanf("%d,%d",&a,&b);
        printf("%d + %d = %d\n",a,b,a+b);

        printf("Do you want to continue [ y-n ]: ");
        scanf("%c",&ch);
        scanf("%c",&ch);

    }while(ch=='y' || ch=='Y');

    printf("exit...");

    return 0;
}