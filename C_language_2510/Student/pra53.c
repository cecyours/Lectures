#include<stdio.h>
void display(char name[])
{
    printf("hello %s\n",name);
}

void imformation(char name[],char division,int rollno,float marks)
{
    printf("%10s |%3c | %1d | %.0f ",name,division,rollno,marks);


if(marks<= 34 && marks <=100)
{
    printf("better luck next time...\n");
}
else
{
    printf("pass...\n");
}
}
void main()
{
    display("shivam");
    display("gk");
    display("suraj sir");
    display("jigar sir");
    display("sumit");

    imformation("shivam",'A',38,100);
}