
#include<stdio.h>
int main()
{

    int n1,n2,n3;
        printf("Enter the 3 numbers : ");
        scanf("%d,%d,%d",&n1,&n2,&n3);


        if(n1>n2)
        {
            if(n1>n3)
            {
                printf(" n1 %d is max ..",n1);    
            }
            else
            {
                printf(" n3 %d is max..",n3);
            }
        }
        else
        {
            if(n2>n3)
            {
                printf(" n2 %d is max..",n2);
            }
            else
            {
                printf(" n3 %d is max ..",n3);
            }
        }

    return 0;
}