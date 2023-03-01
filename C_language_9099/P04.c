
#include<stdio.h>
int main()
{
    int x,y,max,min;

    printf("enter the number : ");
    scanf("%d,%d",&x,&y);

    max = (x>y)?x:y;

    min = (x<y)?x:y;

    (x==y)? printf("same\n"):printf("next level..\n");   

    printf("max : %d\n",max);
    printf("min : %d\n",min);


    return 0;
}