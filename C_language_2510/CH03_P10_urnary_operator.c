#include<stdio.h>

/**
 * *****************************************
 * x++ : post increment // display & add    * *
 * ++x : pre increment // add & display     * * *
 * ****************************************
 * x-- : post decrement//  display & minus  * * *
 * --x : pre decrement // minus & display   * * 
 * *****************************************
 * */ 
int main()
{
    int x = 10;

    printf("during post increment : %d \n",x++); // 10
    printf(" after post increment : %d \n",x); // 11

    printf("during pre increment : %d\n",++x); // 12
    printf("after pre increment  : %d\n",x); //12

    printf("during post decrement : %d\n",x--);//12
    printf("after post decerement : %d\n",x);//11

    printf("during post decerement : %d\n",--x);//10
    printf("after post decerement : %d\n",x);//10



    return 0;
}