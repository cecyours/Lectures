#include<iostream>
using namespace std;

class A{

    public:
        A()
        {
            cout << " Class A " << this << endl;

        }
};

class B : public A
{
    public:
        B()
        {
            cout << " Class B " << this << endl;
        }
};

class C : public A
{
    public:
        C()
        {
            cout << " Class C " << this << endl;

        }
}