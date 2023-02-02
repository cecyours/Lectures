#include<iostream>
using namespace std;

int main()

{
    int a[100],n;
    int i;

    cout<<"Enter the size : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<" a [ "<<i<<" ] ";
        cin>>a[i];
    }

    int x;
    cout<<"Enter the data to search : ";
    cin>>x;

    bool f = false;


    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            f = true;
            break;
        }
    }

    if(f)
    {
        cout<<x<<" data found";
    }
    else
    {
        cout<<" data not found..";
    }
}