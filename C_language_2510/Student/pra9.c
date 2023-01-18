
#include<stdio.h>
int main()
{
    char num;

    printf("enter a number : ");
    scanf("%c",&num);

    if(num>= 'A' && num<= 'Z')
    {
       printf("char");
    }
    else if(num>=1 && num<= 100)
{ 
       printf("num");
}
return 0;
}