#include<stdio.h>
#include<string.h>

struct courses
{
    char website[50];
    char subject[50];
    int price;

};

void main()
{
    struct courses C;

    strcpy(C.website,"game_devlopment.in");
    strcpy(C.subject,"the C programing language");

    C.price=1000;

    printf("website : %s\n",C.website);
    printf("book author : %s\n",C.subject);
    printf("book price : %d\n",C.price);
    
}