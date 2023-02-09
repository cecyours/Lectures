#include<stdio.h>
void main()
{
    char *p= "hello bro";
    printf("before assigning : %s\n",p);

    p="hello";

    printf("after assigning : %s\n",p);
}