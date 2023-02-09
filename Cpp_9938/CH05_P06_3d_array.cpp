
#include<iostream>
using namespace std;

int main()
{
    int a[10][10][10],t,r,c;
    int counter = 0;
    int sum[10][10],i,j,k;

    cout<<"Enter t r c : ";
    cin>>t>>r>>c;

   for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=0;
        
        }
    }

    for(i=0;i<t;i++)
    {
        for(j=0;j<r;j++)
        {
            for(k=0;k<c;k++)
            {
                a[i][j][k] = ++counter;
            }
        }
    }

    

    for(i=0;i<t;i++)
    {
        for(j=0;j<r;j++)
        {
            for(k=0;k<c;k++)
            {           
                cout<<"\t "<<a[i][j][k];
                sum[j][k]+=a[i][j][k];
             }
             cout<<endl;
        }
             cout<<endl;
             cout<<endl;

    }


    cout<<"--------------\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"\t"<<sum[i][j];
        
        }
        cout<<endl;
    }

}