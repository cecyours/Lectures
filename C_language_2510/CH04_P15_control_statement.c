
#include<stdio.h>
#include<stdlib.h>
void display()
{
    printf("Hello world.... 1");

    // return;
    // exit(0);

    printf("Hello world.... 2");

}
int main()
{

    int i=0;
    display();
    printf("Code world...\n");

    for(i=1;i<=10;i++)
    {
        if(i%3==0)
            // break;
            continue;

        printf("line %d.\n",i);
    }
    
        return 0;
}