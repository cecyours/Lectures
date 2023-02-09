#include<stdio.h>

//struct mystructure
{
    int mynum;
    char myletter;
}

int main()
{
    //struct mystructure s1;

    s1.mynum=13;
    s1.myletter ='B';

    printf("my number : %d\n",s1.mynum);
    printf("my letter : %c\n",s1.myletter);

    return 0;
}