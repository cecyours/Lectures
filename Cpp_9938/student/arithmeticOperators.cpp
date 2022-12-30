#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char ch;


        cout<<"Enter expression : ";
        cin>>a>>ch>>b;

        switch (ch)
        {
        case '+':
            cout<<a<<" + "<<b<<" = "<<(a+b)<<endl;
            break;
        
        case '-':
            cout<<a<<" - "<<b<<" = "<<(a-b)<<endl;
            break;

        case '*':
            cout<<a<<" * "<<b<<" = "<<(a*b)<<endl;
            break;

        case '/':
            cout<<a<<" / "<<b<<" = "<<(a/b)<<endl;
            break;

        case '%':
            cout<<a<<" % "<<b<<" = "<<(a%b)<<endl;
            break;
        
        default:
            cout<<"Join ne nakh....";
            break;
        }

        return 0;
}