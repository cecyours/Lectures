
#include<stdio.h>
// #include<conio.h>

/**
 *  returType FunctionName(args....)
 * {
 * 
 *      // code
 *  
 *      return;
 * }
  */

 void display(char name[])
 {
    printf("Hello %s\n",name);
 }

 void result(char name[],int rollno)
{
    printf("%10s | %3d\n",name,rollno);
}
void main()
{

    display("Shivam");
    display("Sumit");
    display("Gk");
    display("Jigar");
    display("Suraj");
    display("Vaibhav");
    
    result("Sumit",35);
}