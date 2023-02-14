#include<stdio.h>
 int main()
 {
    int a = 20;
    
    int *p;

    printf("%d at adress : %p = %u\n",a,&a,&a);

    p = &a;
    printf("%d at adress : %p %u\n",*p,p,p);




 }