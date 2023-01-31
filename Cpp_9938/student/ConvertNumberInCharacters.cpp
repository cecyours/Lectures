#include<iostream>
using namespace std;

int main()
{
    long int n,sum=0,r;
    cout<<"Enter the number = ";
    cin>>n;
    int temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }

    n=temp;
    while(n>=0)
    {
        r=n%10;
        break;
        // cout<<"dcds : "<<r<<endl;
        switch (r)
        {
            case 0:
            cout<<" Zero ";
            break;


            case 1:
            cout<<" One ";
            break;

            case 2:
            cout<<" Two ";
            break;

            case 3:
            cout<<" Three ";
            break;

            case 4:
            cout<<" Four ";
            break;

            case 5:
            cout<<" Five ";
            break;

            case 6:
            cout<<" Six ";
            break;

            case 7:
            cout<<" Seven ";
            break;

            case 8:
            cout<<" Eight ";
            break;

            case 9:
            cout<<" Nine ";
            break;

          
            default:
            cout<<" ttt ";
            break;

        }
         
         n=n/10;
    }
    
}