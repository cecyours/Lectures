#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n;

    cout<<" Enter the size :";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<" a [ "<<i<<" ] ";
        cin>>a[i];
    }

    cout<<" Display .... "<<endl<<endl;

    for(i=0;i<n;i++)
    {
        a[i]*=-1;

        cout<<" a [ "<<i<<" ] = "<<a[i]<<endl;
    }


    return 0;
}