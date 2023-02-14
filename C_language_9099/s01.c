
#include<stdio.h>

        /* function declarations */
        int max(int num1, int num2);
        int min(int num1, int num2);    
    

int main()
{
    int num1, num2, maximum, minimum;

    /* input two number from user */
    printf("enter two number : ");
    scanf("%d,%d",&num1,&num2);

    maximum = max(num1,num2);   // call maximum function 
    minimum = min(num1, num2);  // call minimum function

    printf("\nmaximum = %d\n",maximum);
    printf("minimum = %d",minimum);

    return 0;
}

    /**
     * find maximum between two numbers.
    */
    int max(int num1, int num2)
    {
        return(num1 > num2 ) ? num1 : num2;
    }

    /**
     * find minimum between two numbers.
    */
   int min(int num1, int num2)
   {
        return( num1 >  num2) ? num2 : num1;

   }

