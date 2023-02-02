#include<iostream>
using namespace std;

int main()
{

    int a1[10][10][10],a,b,c;
    int counter = 0;
    int sum[10][10],n,m,l;

    cout<<" Enter a b c : ";
    cin>>a>>b>>c;

    for(n=0;n<b;n++)
    {
        for(m=0;m<c;m++)
        {

            sum[n][m] = 0;

        }
    }

    for(n=0;n<a;n++)
    {
        for(m=0;m<b;m++)
        {
            for(l=0;l<c;l++)
            {
                a[n][m][l] = ++counter;
            }
        }
    }


    for(n=0;n<a;n++)
    {
        for(m=0;m<b;m++)
        {
            for(l=0;l<c;l++)
            {

                cout<<"\t "<<a[n][m][l];
                sum[m][l] +=a[n][m][l];

            }

            cout<<endl;

        }

        cout<<endl;
        cout<<endl;

    }

    cout<<"========================\n";

    for(n=0;n<b;n++)
    {
        for(m=0;m<c;m++)
        {
            
            cout<<"\t"<<sum[n][m];
        }

        cout<<endl;
    }
}
