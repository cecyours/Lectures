#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter num1 and num2 = ";
    cin>>num1>>num2;
    num3=num1+num2;
    if(num3%2==0)
    {
        if(num3 < 0)
        {
            cout<<"is great";
        }
        else
        {
            cout<<"if failed";
        }
    }
    else
    {
        cout<<"if failed fully";
    }
    return 0;
}