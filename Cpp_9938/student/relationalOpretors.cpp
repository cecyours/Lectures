
#include<iostream>
using namespace std;

int main()
{
    char ch;
        cout<<"Enter your character : ";
        cin>>ch;


        if(ch>='a' && ch<='z')
            {
                cout<<"Lower case...";
            }
        else if(ch>='A' && ch<='Z')
            {
                cout<<"Upper case...";
            }
        else if(ch>='0' && ch<='9')
            {
                cout<<"Digit...";
            }
        else
            {
                cout<<"Special symbol...";
            }

    return 0;
}