
#include<iostream>
using namespace std;

int main()
{
    int a[10][10],b[10][10],sum[10][10];
    int i,j;
    int n,m;

    cout<<"Enter row columns : ";
    cin>>n>>m;

    cout<<"Enter A Elements : "<<endl;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Matrix A : \n";

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }

    cout<<"Enter B Elements : "<<endl;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"Mateix B : \n";

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<" "<<b[i][j];
        }
        cout<<endl;
    }

    for(i=0;i<n;i++)
    
    for(j=0;j<m;j++) 
    
    sum[i][j] = a[i][j] + b[i][j];
                                                            
    cout<<endl<<"Sum of two matrix is : "<<endl;
    
    for(i=0;i<n;i++) 
    
    for(j=0;j<m;j++)
     {
        cout<<sum[i][j]<<" ";
        if(j == m -1)
            cout << endl;
     }

    
    
}