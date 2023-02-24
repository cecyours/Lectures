
#include<iostream>
using namespace std;

class A{
    public:
    A()
    {
        cout<<"class A "<<this<<endl;
    }
};
class B : virtual public A{
    public:
    B()
    {
        cout<<"class B "<<this<<endl;
    }
};
class C : virtual public A{
    public:
    C()
    {
        cout<<"class C "<<this<<endl;
    }
};
class D : public C, public B{
    public:
    D()
    {
        cout<<"class D "<<this<<endl;
    }
};

int main()
{
    D d;
}