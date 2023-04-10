#include<iostream>
using namespace std;
int main()
{
    int j;
    cout<<"Enter value of table : ";
    cin>>j;

    for ( int i = 1; i <= 10; i++)
    {
        cout<< j <<" X "<<" = "<<j*i<<endl;
    }
    
    return 0;
}