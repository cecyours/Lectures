#include<stdio.h>
int main()
{
    int rollNo;
    char div;

    printf("Enter div-rollNp : ");
    scanf("%c-%d",&div,&rollNo);

    switch(div)
    {
        case 'A':
        case 'a':
            switch(rollNo)
            {
                case 1 ... 20:printf("God Father");break;
                case 21 ... 40:printf("Bigil");break;
                case 41 ... 60:printf("Mogali");break;
                default: printf("invalid rollNo...0");
            }
            break;
        case 'B':
        case 'b':
            switch(rollNo)
            {
                case 1 ... 20: printf("Rakshak");break;
                case 21 ... 40:printf("Singham");break;
                case 41 ... 60:printf("Sultan");break;
                default: printf("inavald rollNo...");

            }break;
        default:
            printf("invalid div...");break;
    }
}