
#include<stdio.h>
int main()
{
    int rollNo;
    char div;

    printf("Enter div-rollNo : ");
    scanf("%c-%d",&div,&rollNo);

    switch (div){

        case 'A':
        case 'a':

                switch(rollNo)
                {
                    case 1 ... 10: printf("iron man");break;
                    case 11 ... 20: printf("hulk");break;
                    case 21 ... 30: printf("BGMI");break;
                    default : printf("invalid div-rollNo...");
                };break;
          case 'B':
          case 'b':      

                switch(rollNo)
                {
                    case 1 ... 10: printf("captain");break;
                    case 11 ... 20: printf("java");break;
                    case 21 ... 30: printf("America");break;
                    default : printf("invalid div-rollNo");
                };break;
                default : printf("invalid div...");
    
    }



    return 0;
}