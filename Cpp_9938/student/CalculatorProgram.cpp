#include<iostream>
#include<stdio.h>
//#include<conio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

void add();
void sub();
void multi();
void division();
void sqr();
void srt();
void exit();
int main()
{
    // getc();
    int opr;
    do{
        cout<<"\n\n\t *****Select any operation from the calculator***** \n\n"<<endl
        <<"\t\t\t1 = addition"<<endl
        <<"\t\t\t2 = subtraction"<<endl
        <<"\t\t\t3 = multiplication"<<endl
        <<"\t\t\t4 = divion"<<endl
        <<"\t\t\t5 = square"<<endl
        <<"\t\t\t6 = square root"<<endl
        <<"\t\t\t7 = exit"<<endl
        <<"\t \n Make a choice : ";
        cin>>opr;

        switch(opr)
        {
            case 1:
            add();
            break;

            case 2:
            sub();
            break;

            case 3:
            multi();
            break;
            
            case 4:
            division();
            break;

            case 5:
            sqr();
            break;

            case 6:
            srt();
            break;

            case 7:
            exit(0);
            break;

            default:
            cout<<"Something is wrong..!!!";
            break;
        }
        
        cout<<" \n--------------------\n";
    }while(opr != 7);
    // clrscr();
}

void add()
{
    int n,sum = 0,i,number;
    cout<<"How many numbers you want to add : ";
    cin>>n;
    cout<<"Please enter the number one by one : \n";
    for(i =1;i<=n;i++)
    {
        cin>>number;
        sum = sum + number;
    }

    cout<<"\n Sum of the numbers = "<<sum;
}

void sub()
{
    int num1,num2,z;
    cout<<"\n Enter the first number = ";
    cin>>num1;

    cout<<"\n Enter the second number = ";
    cin>>num2;

    z = num1 - num2;
    cout<<"\n Subtraction of the number = "<< z;
}

void multi()
{
    int num1,num2,mul;
    cout<<"\n Enter the first number = ";
    cin>>num1;

    cout<<"\n Enter the second number = ";
    cin>>num2;

    mul = num1 * num2;
    cout<<"\n Multipliction of two number = "<< mul;
}

void division()
{
    int num1,num2,div = 0;
    cout<<"\n Enter the first number = ";
    cin>>num1;

    cout<<"\n Enter the second number = ";
    cin>>num2;

    while(num2 == 0)
    {
        cout<<"\n Divisor canot be zero"
        "\n Please enter the divisor once again : ";

        cin>>num2;
    }

    div = num1 / num2;
    cout<<"\n Multipliction of two number = "<< div;
}

void sqr()
{
    int num1;
    float sq;
    
    cout<<"\n Enter a number to find the square : ";
    cin>>num1;

    sq = num1 * num1;
    cout<<"\n Square of "<<num1<<" is : "<<sq;
}

void srt()
{
    float q;
    int num1;
    
    cout<<"\n Enter the number to find the square root";
    cin>>num1;

    q = sqrt(num1);
    cout<<"\n Square root of "<< num1 <<" is : "<<q;
}