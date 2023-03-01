
#include<stdio.h>

int display()

    {
        printf("hello hulk\n");

        return 99;

        printf("how...\n");
    }

    
int main()
{
    int i,x;

    for(i=1;i<=10;i++)

    {
        if(i%4==0)
        {
            // break;
            continue;
        }
        printf("hello world %d\n",i);
    }
   x = display();
    printf("value of x : %d\n",x);
}