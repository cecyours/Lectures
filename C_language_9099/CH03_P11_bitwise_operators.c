#include<stdio.h>
int main()
{
    
    int a = 10;
    int b = 7;
    int c;


    /**
     * a : 10 : 1010
     * b :  7 : 0111
     * --------------
     *      & : 0010 => 2
    */

    c = a&b;
    printf("%d & %d = %d\n",a,b,c);

   /**
     * a : 10 : 1010
     * b :  7 : 0111
     * --------------
     *      | : 1111 => 15
    */

    c = a|b;
    printf("%d | %d = %d\n",a,b,c);
 
    return 0;
}