#include<iostream>
using namespace std;

#define A 900
int main()
{
    const int r=100;

    #undef A
    #define A 200
    
    cout<<A;

    cout<<"\n Hello "<<r<<endl;

    return 0;
}