
#include<stdio.h>

int display()
{
    printf("Hello World\n");

    return 99;

    printf("Hii ,,,\n");
}
int main()
{
    int i,x;


    for(i=1;i<=10;i++)
    {

        if(i==5)
        {
            // break;
            continue;
        }

        printf("Line %d\n",i);
    }

    x = display();
    printf("value of x : %d\n",x);
}