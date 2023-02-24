/* 
    A -> C
    B -> C
 */

#include<iostream>
using namespace std;

class A{

    public:
    A()
        {
            cout<<"class A "<<this<<endl;
        }
    
    void display()
    {
        cout<<"welcome 2 A";
    }
};
class B{

    public:
    B()
        {
            cout<<"class B "<<this<<endl;
        }

    void display()
    {
        cout<<"welcome 2 B";
    }
};
class C : public A,public B{

    public:
    C()
        {
            cout<<"class C "<<this<<endl;
        }
};

int main()
{
    C c;

    c.B::display();
    c.A::display();
}