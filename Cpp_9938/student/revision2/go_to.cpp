#include<iostream>
using namespace std;

int main()
{
    int i,j,num;
    for ( i = 1; i < 10; i++)
    {
        cout<<i<<endl;
        for ( j = 1; j < 10; j++)
        {
            cout<<"enter the number but enter 0 to exit= ";
            cin>>num;
            if (num==0)
            {
                goto finish;
            }
            
        } 
    }
    finish:
        cout<<"goto statement called";
    return 0;

}