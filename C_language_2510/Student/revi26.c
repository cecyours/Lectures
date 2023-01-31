#include<stdio.h>
void display()
{
    printf("hello world... 1");
    printf("hello world... 2");
}
int main()
{
    int i=0;
    display();
    printf("code world...\n");

    for(i=1;i<=10;i++)
    {
        if(i%3==0)
          continue;

        printf("line %d.\n",i);
    }
    return 0;
}