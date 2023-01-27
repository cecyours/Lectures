
#include<stdio.h>
void main()
{
    int a,b;
    char ch;

    printf("Enter expression : "); // like 2+4, a = 2,ch = +,b = 4
    scanf("%d%c%d",&a,&ch,&b);

    switch(ch)
    {
        case '+':
        printf("%d + %d = %d\n",a,b,a+b);break;

        case '-':
        printf("%d - %d = %d\n",a,b,a-b);break;

        case '*':
        printf("%d * %d = %d\n",a,b,a*b);break;
        
        case '/':
        printf("%d / %d = %d\n",a,b,a/b);break;

        case '%':
        printf("%d %% %d = %d\n",a,b,a%b);break;

    }
}