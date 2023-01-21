#include<stdio.h>
int main()
{
    int x = 10;

    printf("during post increment : %d\n",x++);//10
    printf("after post increment : %d\n",x);//11

    printf("during pre increment : %d\n",++x);//12
    printf("after pre increment : %d\n".x);//12

    printf("during post decerement : %d\n",x--);//12
    printf("after post decerement : %d\n",x);//11

    printf("during pre decerement : %d\n",--x);//11
    printf("after pre decerement : %d\n",x);//10

    return 0;


}