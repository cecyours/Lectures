
#include<stdio.h>

struct Student{
    int rollNo;
    char div;
}
int main()
{
    struct Student s;

    printf("Enter rollNo : ");
    scanf("%d",&s.rollNo);

    printf("Enter div : ");
    scanf("%c",&s.div);


    printf("---------------\n");

    printf("rollNo : %d\n",s.rollNo);
    printf("   div : %c\n",s.div);
    
    return 0;
}