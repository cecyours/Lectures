#include<iostream>
using namespace std;
int main()
{
    int value1,value2,value3;
    cout<<"Enter the value1 and value2 : ";
    cin>>value1>>value2;
    value3=value1+value2;
    if(value3%2==0)
    {
        if(value3 < 0)
        {
            cout<<"Is great...";
        }
        else
        {
            cout<<" I failed...";
        }
    }
    else
    {
        cout<<" I Quit...";
    }
    return 0;
}