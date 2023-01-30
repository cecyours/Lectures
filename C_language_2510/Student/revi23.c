#include<stdio.h>
int main()
{
    int day;

    printf("enter the day number : ");
    scanf("%d",&day);

    switch(day)
    {
        case 1: 
                printf("Monday\n");
                break;
        case 2:
                printf("Tuesday\n");
                break;
        case 3: 
                printf("Wednesday\n");
                break;
        case 4:
                printf("Thursday\n");
                break;
        case 5: 
                printf("friday\n");
                break;
        case 6:
                printf("saturday\n");
                break;
        case 7:
                printf("Sunday\n");
                break;
            default :

        printf("invalid...");
                break;
    }
    return 0;
}