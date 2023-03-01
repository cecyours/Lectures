
#include<stdio.h>
int main()
{
    char ch,expression;
    int a,b;

    do{

        printf("enter expression : ");
        scanf("%d%c%d",&a,&expression,&b);

        switch(expression)
        {
            case '+':printf("%d + %d =  %d\n",a,b,a+b);
            case '-':printf("%d - %d =%d\n",a,b,a-b);
            case '*':printf("%d * %d = %d\n",a,b,a*b);
            case '/':printf("%d / %d = %d\n",a,b,a/b);
            case '%':printf("%d %% %d = %d\n",a,b,a%b);
        }
        
        printf("enter choice [y/n] ");
        scanf("%c",&ch);
        scanf("%c",&ch);


    }while(ch=='y' || ch=='Y'); 
    
    
    



    return 0;
}