
#include<stdio.h>

int main(int argc, char const *argv[])
{

    int n=10;

    // x++ : post increment
    // ++x : pre increment

    printf("during post increment : %d\n",n++); // 10
    printf(" after post increment : %d\n",n); // 11

    printf("------------------\n");

    printf("during pre increment : %d\n",++n); // 12
    printf(" after pre increment : %d\n",n); // 12

    return 0;
}
