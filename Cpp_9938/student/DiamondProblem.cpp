#include<iostream>
using namespace std;

class A {

    public:
        A()
        {
            cout << " Class A " << this << endl;
        }
};

class B : virtual public A{
    
    public:
        B()
        {
            cout << " Class B " << this << endl;
        }
};

class C : virtual public A{

    public:
        C()
        {
            cout << " Class C " << this << endl;
        }
};

class D : public B , public C{

    public:
        D()
        {
            cout << " Class D " << this << endl;
        }
};


int main()
{
    D d;
}
