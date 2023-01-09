#include<iostream>
using namespace std;
int main()
{
    int a[100],i,n;
    int neg=0,zero=0,pos=0;

    cout<<"Enter the size : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<" a [ "<<i<<" ] = ";
        cin>>a[i];
    }

    /**
     * calculate the number..
     */
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
        cout<<"there is Non-zero value in array.\n";
    }
    else
    {
        cout<<"Total "<<zero<<" are zero\n";
    }


    if(pos==0)
    {
        cout<<"there is Non-pos value in array.\n";
    }
    else
    {
        cout<<"Total "<<pos<<" are +ve\n";
    }


    if(neg==0)
    {
        cout<<"there is Non-neg value in array.\n";
    }
    else
    {
        cout<<"Total "<<neg<<" are -ve\n";
    }

    return 0;
}