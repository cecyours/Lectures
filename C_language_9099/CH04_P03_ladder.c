
#include<stdio.h>
int main()
{
    int day;

        printf("Enter the day number : ");
        scanf("%d",&day);

        if(day==1)
        {
            printf("Monday\n");
        }
        else if(day==2)
        {
            printf("Tuesday\n");
        }
        else {
            printf("Invalid day...");
        }       
    return 0;
}