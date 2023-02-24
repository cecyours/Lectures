
#include<stdio.h>
int main()
{
    int rollNo;
    char div;

    printf("enter the div-rollNo : ");
    scanf("%c-%d",&div,&rollNo);

    switch (div){

        case'A':
        case'a':

            switch(rollNo)
            {
                case 1 ... 10: printf("iron man");break;
                case 11 ... 20: printf("hulk");break;
                case 21 ... 30: printf("thor");break;
                default : printf("invalid rollNo");
            };break;
       
        case'B':
        case'b':

                switch(rollNo)
                {
                    case 1 ... 10:printf("captain");break;
                    case 11 ... 20:printf("cec");break;
                    case 21 ... 30:printf("vivo");break;
                    default : printf("invalid rollNo");
                };break;
                default:printf("invalid div..");
    
    }

    return 0;
}