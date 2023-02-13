
#include<stdio.h>

union Student{
    int rollNo;
    char div;
};
int main()
{
    union Student s;


    printf("Enter div : ");
    scanf("%c",&s.div);

    printf("Enter rollNo : ");
    scanf("%d",&s.rollNo);


    printf("---------------\n");

    printf("rollNo : %d\n",s.rollNo);
    printf("   div : %c \n",s.div);
    
    return 0;
}