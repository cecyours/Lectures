#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n;
    int neg=0,zero=0,pos=0;

    cout<<" Enter the size : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<" a [ "<<i<<" ] ";
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            neg++;
        }
        else if(a[i]>0)
        {
            pos++;
        }
        else
        {
            zero++;
        }
    }

    
    if(zero==0)
    {
        cout<<"There is non-zero value in array.\n";
    }
    else
    {
        cout<<"total "<<zero<<" are zero.\n";
    }

    if(pos==0)
    {
        cout<<"There is Non-pos value in array.\n";
    }
    else
    {
        cout<<"Total "<<pos<<" are pos +value.\n";
    }

    if(neg==0)
    {
        cout<<"There is Non-neg value in array.\n";
    }
    else 
    {
        cout<<"Total "<<neg<<" are neg -value.\n";
    }
}