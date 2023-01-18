#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;

    while(sum<=100)
    {
        cout<<"Enter the number :";
        cin>>num;

        sum+=num;

        cout<<"sum : "<<sum<<endl;
    }

    cout<<"Final sum : "<<sum<<endl;

    return 0;
}