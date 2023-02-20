
#include<stdio.h>
int main()
{

    // x++ : post increment
    // ++x : pre increment

    int n=28;
    
    printf("during post increment : %d\n",n++);
    printf(" after post increment : %d\n",n);

    printf("--------------\n");

    printf("during pre increment : %d\n",++n);
    printf("after pre incremet : %d\n",n);

                    
    


    return 0;
}