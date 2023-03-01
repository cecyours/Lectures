#include<iostream>
using namespace std;

class A{

    public:
        A()
        {
            cout<<"class A "<<this<<endl;
        }
    void display(){
        cout<<"class a : Hello World "<<this<<endl;
    }
};

class B : public A{

    public:
        B()
        {
            cout<<"class B "<<this<<endl;
        }
    void display(){
        cout<<"class b : Hello World "<<this<<endl;
    }
};

class C: public B{

    public:
        C()
        {
            cout<<"class C "<<this<<endl;
        }

    void display_me(){
        cout<<"class c : Hello World "<<this<<endl;
    }
};

int main()
{
    C c;
    // c.display();
}