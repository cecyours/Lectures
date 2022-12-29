#include<iostream>
using namespace std;
int main()
{
    char ch;
        cout<<"Enter your character : ";
        cin>>ch;


        if(ch>='a' && ch<='z')
        {
            cout<<"Lower case..";
        }
        else if(ch<='Z' && ch>='A')
        {
            cout<<"Upper case..";
        }
        else if(ch>='0' && ch<='9')
        {
            cout<<"Digits ...";
        }
        else
        {
            cout<<"Special Symbol";
        }
    return 0;
}
// x+=54; // x = x+54