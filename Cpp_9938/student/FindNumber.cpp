#include<iostream>
using namespace std;

int main()

{
    int a[100],n;
    int counter = 0;
    int i;

    cout<<"Enter the size : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<" a [ "<<i<<" ] ";
        cin>>a[i];
    }
}