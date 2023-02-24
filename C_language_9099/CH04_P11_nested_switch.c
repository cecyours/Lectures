
#include<stdio.h>
int main()
{
    int rollNo;
    char div;


    printf("Enter div-RollNo : ");
    scanf("%c-%d",&div,&rollNo);


    switch(div){

        case 'A':
        case 'a':

            switch(rollNo)
            {
                case 1 ... 10:  printf("Iron man");break;
                case 11 ... 20: printf("Captain");break;
                default : printf("Invalid rollno");
            };break;
        
        case 'b':
        case 'B':

            switch(rollNo)
            {
                case 1 ... 10:  printf("HUlK");break;
                case 11 ... 20: printf("THOR");break;
                default : printf("Invalid rollno");
            };break;
        default:printf("invalid div..");
    }
    return 0;
}