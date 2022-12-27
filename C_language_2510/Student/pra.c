#include<stdio.h>
int main()
{
    int a = 7;
    int b = 3;
    int c;


    /**
     * bitwise and
     * 7 : 0 1 1 1;
     * 3 : 0 0 1 1;
     * ------------
     * & : 0 0 1 1  => 3
    */

    c = a&b;
    printf("%d & %d = %d\n",a,b,c);



    /**
     * bitwise or
     * 7 : 0 1 1 1;
     * 3 : 0 0 1 1;
     * ------------
     * | : 0 1 1 1; => 7
    */

    c = a|b;
    printf("%d | %d = %d\n",a,b,c);


    /**
     * bitwise xor
     * 7 : 0 1 1 1;
     * 3 : 0 0 1 1;
     * -------------
     * ^ : 0 1 0 0 => 4
    */

   c = a^b;
   printf("%d ^ %d = %d\n",a,b,c);


   /**
    * bitwise nagation ~
    * 
    * c = -(a+1)
    *   = -(7+1)
    *   = -(8)
    *   = -8
   */
  c = ~a;
  printf("~%d = %d\n",a,c);

  return 2;
}