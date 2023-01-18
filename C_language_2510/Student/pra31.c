#include<stdio.h>
int main()
{
    char div;
    int rollno;
    printf("enter the div-rollno : ");
    scanf("%c-%d",&div,&rollno);
    switch(div)
    {
        case'a':
        case'A':
            switch(rollno)
            {
                case 1  ... 10:printf("iron man");   break;
                case 11 ... 20:printf("hulk");       break;
                case 21 ... 30:printf("thor");       break;
                case 31 ... 40:printf("loki");       break;
                case 41 ... 50:printf("spider man"); break;

                default:printf("invalid rollno...");
            }
            break;

        
        case'b':
        case'B':
            switch(rollno)
            {
                case 1  ... 10:printf("capitan");       break;
                case 11 ... 20:printf("widow");         break;
                case 21 ... 30:printf("wonda");         break;
                case 31 ... 40:printf("falcon");        break;
                case 41 ... 50:printf("hokai");         break;

                default:printf("invalid rollno...");
            }
            break;

            default:printf("invalid division");
    }


    return 0;
}