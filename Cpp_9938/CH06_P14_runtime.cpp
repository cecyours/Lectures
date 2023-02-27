
#include<iostream>
using namespace std;

class A{

    public:
    void display()
    {
        cout<<"Hello World "<<endl;
    }
};

class B : public A{

    public:
    void display()
    {
        cout<<"Hello Programmer "<<endl;
    }
};

int main()
{
    B b;

    b.display();
    b.A::display();
    return 0;
}