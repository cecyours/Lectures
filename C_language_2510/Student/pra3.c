#include<stdio.h>
int main()
{
    int a=10,b=25,c=5,d=5;
    int ans;
    
    ans = a*b-c*c/d;
    /**
     * ans = 10*25-5*5/5
     *     = 250-5
     *     = 245
    */

    printf("your ans : %d\n",ans);

    return 0;
}