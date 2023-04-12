#include<iostream>
using namespace std;
int main()
{
    int n,m,a;
    cout<<"Enter 2 number : ";
    cin>>n>>m;
    do
    {
        a=n+m;
        cout<<n<<"+"<<m<<"="<<a;
    
    } while (a<10);
    
    return 0;
}