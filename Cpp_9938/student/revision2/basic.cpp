#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the vlue of num1 = ";
    cin>>num1;
    cout<<"Enter the value of num2 = ";
    cin>>num2;
    
    int add = num1+num2;
    cout<<add<<endl;
    int minus = num1-num2;
    cout<<minus<<endl;
    int multi = num1*num2;
    cout<<multi<<endl;
    int div = num1/num2;
    cout<<div<<endl;
    int remind = num1%num2;
    cout<<remind<<endl; 

    return 0;
}