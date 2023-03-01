#include<iostream>
using namespace std;

// @compile time polymorphims
class Task{
    public:

    void sum()
    {
        cout<<"please prove some values.."<<endl;
    }
    void sum(int a,int b)
    {
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    }

    void sum(int a,int b,int c)
    {
        cout<<a<<" + "<<b<<" + "<<c<<" = "<<a+b+c<<endl;
    }

};
int main()
{
    Task t;
    t.sum(12,3,38);
    t.sum(2,3);
    t.sum();
}