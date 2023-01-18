
#include<stdio.h>
int main()
{
    
    char div;
    int rollno;

    printf("enter the div-rollNo : ");
    scanf("%c-%d",&div,&rollno);


    switch(div)
    {
        case 'a':
        case 'A':

            switch(rollno)
            {
                case 1 ... 10:printf("Iron Man");break;
                case 11 ... 20:printf("Thor");break;
                case 21 ... 30:printf("Captain");break;
                case 31 ... 40:printf("Spider");break;
                case 41 ... 50:printf("Black Widow");break;
                default: printf("invalid rollno...");
            }
            break;
        
        case 'B':
        case 'b':
                switch(rollno)
                {
                        case 1 ... 10:printf("Avenger");break;
                        case 11 ... 20:printf("Loki");break;
                        case 21 ... 30:printf("Wonda");break;
                        case 31 ... 40:printf("falcon");break;
                        case 41 ... 50:printf("Hulk");break;
                        default: printf("invalid rollno...");
                
                    
                }break;

                default:printf("Invalid division");

    }

    return 0;
}