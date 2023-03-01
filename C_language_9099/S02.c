
#include<stdio.h>
int main()
{
    int day;

    printf("enter the day number : ");
    scanf("%d",&day);


    if(day==1)
    {
        printf("monday\n");

    }
    else if(day==2)
    {
        printf("tuesday\n");
    }
    else if(day==3)
    {
        printf("wedneshday\n");

    }
    else if(day==4)
    {
        printf("thursday\n");
    }
    else if(day==5)
    {
        printf("friday\n");
    }
    else if(day==6)
    {
        printf("saturday\n");
    }
    else if(day==7)
    {
        printf("sunday");
    }



    else
    {
        printf("invalid day..");
    }

    

}