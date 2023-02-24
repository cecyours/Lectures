/*
a
c   b
    d   f
    e

*/

#include<iostream>
using namespace std;

class A {
    public:
        A ()
        {
            cout << "\n\tEnter  A " << this << endl;

        }
};

class B : public A{
    
    public:
        B()
        {
            cout<<"\n\tHello B "<<this <<endl;
        }

};

class C : public A{

    public:
        C()
        {
            cout<<"\n\thello C "<<this <<endl;
        }

};

class D : public B{

    public:
        D()
        {
            cout<<"\n\thello D "<<this <<endl;
        }

};


class F : public B{

    public:
        F()
        {
            cout<<"\n\thello F "<<this<<endl;
        }

};

class E : public D , public F , public C{

    public:
        E()
        {
            cout<<"\n\thello E "<<this <<endl;
        }

};

int main()
{

    cout<<"\n"<<endl;
    B b;
    cout<<"================================================================"<<endl;
    C c;
    cout<<"================================================================"<<endl;
    D d;
    cout<<"================================================================"<<endl;
    E e;
    cout<<"================================================================"<<endl;
    F f;
    cout<<"================================================================"<<endl;

}