#include<iostream>
using namespace std;

class A
{

    public:

    void display()
    {
        cout<<"I am A ";

    }
};

class B : public A
{

    public:

    void display()
    {
        cout<<"I am B ";
    }

};

class C : public A
{

    public:

    void display_()
    {
        cout<<"I am C ";
    }

};

int main()
{
     B b;

     C c;

     c.display();
     b.display();


}