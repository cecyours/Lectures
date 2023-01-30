#include<stdio.h>
/**
 * 
 * !5 = 5x4x3x2x1
 * 
  */
int main()
{
    int f=1,n;

    printf("Enter your number : ");
    scanf("%d",&n);

    while(n>0)
    {
        f = f*n;
        n--;
    }

    printf("value : %d\n",f);
    
}
