#include<stdio.h>
int main()
{

    int rollNo;
    char div;


    printf("Enter Div-rollNO : ");
    scanf("%c-%d",&div,&rollNo);


    switch(div)
    {
        case 'A':
        case 'a':
            switch(rollNo)
            {
                case 1 ... 20: printf("Iron Man 1");break;
                case 21 ... 40: printf("Iron Man 2");break;
                case 41 ... 60: printf("Iron Man 3");break;
                default: printf("invalid rollNo ..0");
            }
            break;
        case 'B':
        case 'b':
            switch (rollNo)
            {
                case 1 ... 20: printf("Hulk 1");break;
                case 21 ... 40: printf("Hulk 3");break;
                case 41 ... 60: printf("Hulk 2");break;
                default: printf("invalid rollNo...");
            }break;
        
        default:
            printf("invalid div....");break;
    }

}

