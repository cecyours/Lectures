#include<iostream>
using namespace std;
class className
{
    public:
       className()
        {
           cout<<"hello this is default constructer"; 
        }
};
int main()
{
// By making object ou are auto calling the constructer
    className obj;
    return 0;
}