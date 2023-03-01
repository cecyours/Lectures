
#include<stdio.h>
int main()
{
    int x,y,max,min;

    printf("Enter 2 number : ");
    scanf("%d,%d",&x,&y);

    max = (x>y)?x:y;
    min = (x<y)?x:y;
    printf("max : %d\n",max);
    printf("min : %d\n",min);




    return 0;
}