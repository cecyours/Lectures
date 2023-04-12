#include<iostream>
using namespace std;
int main()
{
    int value1,value2,value3;
    cout<<"Enter the value1 and value2 : ";
    cin>>value1>>value2;
    value3=value1+value2;
    if(value3==50)
    {
        cout<<"hello";
    }
    else if(value3==80)
    {
        cout<<"blink";
    }
    else if(value3==70)
    {
        cout<<"blink 2";
        
    }
    else if(value3==60)
    {
        cout<<"blink 3";
        
    }
    else if(value3==35)
    {
        cout<<"blink 4";
    }
    else if(value3==64)
    {
        cout<<"blink 5";
        
    }
    else
    {
        cout<<" I Quit...";
    }
    return 0;
}