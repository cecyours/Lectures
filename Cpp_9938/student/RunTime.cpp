#include<iostream>
using namespace std;

class A{

    public:
        void display()
        {
            cout<<"\n\thello coder "<<endl;
        }
};

class B : public A{

    public:
        void display()
        {
            cout<<"\n\thello programmer "<<endl;
        }
};
int main()
{
    B b;

    b.display();
    b.A::display();


    return 0;
}