
#include<stdio.h>
int main()
{
    char ch,expression;
    int a,b;

    do{
        printf("Enter expression : ");
        scanf("%d%c%d",&a,&expression,&b);

        switch(expression)
        {

            case '+':printf("%d + %d = %d\n",a,b,a+b);break;
        }

        printf("Enter choice [y/n] ");
        scanf("%c",&ch);
        scanf("%c",&ch);
    }while(ch=='y' || ch=='Y');
    return 0;
}