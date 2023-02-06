
#include<stdio.h>
#include<stdlib.h>
struct Student{
    int rollNo;
    char name[100];
    float marks;
};
int main()
{
     
     FILE *fp;
    struct Student s;
    char ch; 
    long position;

    printf("Enter the rollNo : ");
    scanf("%d",&s.rollNo);

    printf("Enter the name : ");
    scanf("%s",&s.name);

    printf("Enter the marks : ");
    scanf("%f",&s.marks);

    system("clear");

    // store details to file

    fp = fopen("data.txt","a+");

    fprintf(fp,"| %3d | %10s | %3.2f |\n",s.rollNo,s.name,s.marks); 
    fprintf(fp,"+ %3s + %10s + %5s +\n","---","----------","-----"); 

    fseek(fp,19,0);


    rewind(fp);

    position = ftell(fp);
    printf("position : %ld\n",position);
    

    //get data from file
    while((ch=fgetc(fp))!=-1)   
    {
        printf("%c",ch);
    }

    return 0;
}