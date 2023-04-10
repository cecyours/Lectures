#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"Enter the number : ";
    cin>>num1;
    if(num1%2==0)
    {
        cout<<"\n\t *** Even ...***";
    }
    else
    {
        cout<<"\n\t *** Odd ...***";
    }
    return 0;
}