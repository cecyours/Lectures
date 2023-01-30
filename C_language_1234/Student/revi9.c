#include<stdio.h>
int main()
{
    int x = 10;

    printf("during post increment : %d\n",x++);
    printf(" after post increment : %d\n",x);


    printf("during pre increment : %d\n",++x);
    printf(" after pre increment : %d\n",x);


    printf("during post decrement : %d\n",x--);
    printf(" after post decrement : %d\n",x);


    printf("during post decerement : %d\n",--x);
    printf(" after post decerement : %d\n",x);

return 0;

}