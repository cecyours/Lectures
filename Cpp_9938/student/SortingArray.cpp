#include<iostream>
using namespace std;

int main()
{
    int a[100],n,temp;
    int i,j;

    cout<<"Enter the Array : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<" a [ "<<i<<" ] = ";
        cin>>a[i];
    
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
          cout<<"\n\n a [ "<<i<<" ] = "<<a[i]<<endl;
      
    }
    

}