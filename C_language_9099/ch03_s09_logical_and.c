#include<stdio.h>
int main()
{
    float roll_number;

    printf("enter the roll number : ");
    scanf("%f",&roll_number);

    if(roll_number>=20 &&roll_number<=70)

    {
        printf("welcome");
    }
    else
    {
        printf("by by..");
    }
    return 0;

}
