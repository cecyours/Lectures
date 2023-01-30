
#include<stdio.h>
int main()
{
    int rev=0,num,rem=0;

    printf("enter yhe number : ");
    scanf("%d",&num);
 
  while(num>0)
    {
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
 
    while(rev>0)
    {
        printf("your digit : %d\n",rev%10);
        rev = rev/10;    
    }

return 0;

}