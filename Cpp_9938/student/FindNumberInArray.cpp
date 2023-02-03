#include<iostream>
using namespace std;

int main()

{
    int a[100],n;
    int i;

    cout<<"\t\t ***Enter The Size*** :\n ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<" a [ "<<i<<" ] = ";
        cin>>a[i];
    }


    int x;


    cout<<"\n\n Enter The Data To Search : ";
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

        cout<<x<<"\n Data Found...";

    }

    else
    {

        cout<<"\n ERROR DATA NOT FOUND...";

    }


}