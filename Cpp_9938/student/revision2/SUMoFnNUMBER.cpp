#include<iostream>
using namespace std;
int main()
{
    int j;
    cout<<"Enter the number : ";
    cin>>j;

    for (int i = 1; i <= 10; i++)
    {
        cout<<j<<"+"<<i<<"="<<(j+=i)<<endl;
    }
    
}