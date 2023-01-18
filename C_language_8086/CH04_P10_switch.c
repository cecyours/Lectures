
#include<stdio.h>
int main()
{
    int day;

    printf("Enter day number : ");
    scanf("%d",&day);


    switch(day)
    {
        case 1: printf("Monday\n");break;
        case 2: printf("Tuesday\n");break;
        case 3: printf("web\n");break;
        case 4: printf("thur\n");break;
        case 5: printf("Fri\n");break;
        case 6: printf("sat\n");break;
        case 7: printf("sun\n");break;
        default: printf("Invalid..");
    }
    return 0;
}