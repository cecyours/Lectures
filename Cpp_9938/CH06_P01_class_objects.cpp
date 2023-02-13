#include<iostream>
using namespace std;

class Task{
    
    public:
    void display()
    {
        cout<<"Hello World "<<this<<endl;
    }
};

int main()
{
    Task t,t2; //object

    t.display();
    t2.display();
}