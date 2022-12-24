#include<stdio.h>

int main()
{
    int num;

        printf("enter any numbers");
        scanf("%d",&num);
        
        if(num > 0)
        {
                num=num*-1;
                            printf("negative\n");
        }

            printf("your numbers  %d\n",num);
        return 0;
}