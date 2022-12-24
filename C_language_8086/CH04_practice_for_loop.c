#include<stdio.h>
int main()
{
    int start,end,step;
    int i;

    printf("Enter a start,end:  ");
    scanf("%d,%d" ,&start,&end);

    for(i=start;i<end;i++)
    {
            printf("number : %d\n",i);
    }
}