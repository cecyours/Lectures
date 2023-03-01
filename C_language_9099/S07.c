
#include<stdio.h>
void main()
{
    int month;
    

    printf("enter the month number : ");
    scanf("%d",&month);

    switch (month)
    {
        case 1:printf("january");break;
        case 2:printf("february");break;
        case 3:printf("march");break;
        case 4:printf("April");break;
        case 5:printf("may");break;
        case 6:printf("june");break;
        case 7:printf("july");break;
        case 8:printf("August");break;
        case 9:printf("september");break;
        case 10:printf("octomber");break;
        case 11:printf("nevember");break;
        case 12:printf("december");break;
        default:printf("invalid month number... ");
    }


    
}