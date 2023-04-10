#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,num4;

    cout<<"Enter the value of num1 and num2 : ";
    cin>>num1>>num2;

    int add = num1+num2;
    cout<<add<<endl;
    
    cout<<"========================\n";

    cout<<"Enter the value of num3 and num4 : ";
    cin>>num3>>num4;

    int add1 = num3+num4;
    cout<<add1<<endl;

    cout<<"========================\n";

    if(add == add1)
    {
        int multi = add*add1;
        cout<<multi;
    }
    else
    {
        cout<<"not same";
    }

    return 0;
}