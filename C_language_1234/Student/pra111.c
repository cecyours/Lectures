#include<stdio.h>
void main()
{
    char *p = "hello bro";

    printf("string p : %s\n",p);

    char *q;

    printf("copying the content of p into q...\n");
    q=p;
    printf("string q : %s\n",q);
    
}