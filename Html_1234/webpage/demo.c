#include<stdio.h>
void main()
{
    unsigned int a;
    printf("Enter the value of a :-");
    scanf("%d",&a);
    if(a<0)
    {
      a=-a;
    }
      
      printf("new %d",a);
}