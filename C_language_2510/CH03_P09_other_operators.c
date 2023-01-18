
/**
* & ; amperson : address
  , ; saperate
* * : pointer access
*/ 


#include<stdio.h>
int main()
{

    int a,*ptr;

    printf("Enter the number : ");
    scanf("%d",&a);

    ptr = &a;

    printf("using ptr : %d\n",*ptr);
    printf("  using a : %d\n",a);

    printf("square of : %d\n",(a**ptr));
    return 0;
}