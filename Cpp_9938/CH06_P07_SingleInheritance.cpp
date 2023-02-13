
//   private : own class
// protected : child class
//    public : every where

#include<iostream>
using namespace std;

class A{

    public:
    
    void display()
    {
        cout<<"I am A ";
    }
};

class B : public A
{   
    public:
    
    void display_()
    {
        cout<<"I am B";
    }
};

int main()
{
    B b;

    b.display();
}