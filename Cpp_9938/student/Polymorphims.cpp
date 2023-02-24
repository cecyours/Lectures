#include<iostream>
using namespace std;

class Task{
 

    public:
        void sum(int a, int b)
        {
            cout<<"\n\n========================\n\n"<<a<<" * "<<b<<" = "<<a*b<<"\n\n========================\n"<<endl;
        }

        void sum(int a, int b,int c)
        {
            cout<<"\n\n========================\n\n"<<a<<" * "<<b<<" * "<<c<<" = "<<a*b*c<<"\n\n========================\n"<<endl;
            
        }
        
        void sum(int a,int b,int c,int d)
        {
            cout<<"\n\n========================\n\n"<<a<<" * "<<b<<" * "<<c<<" * "<<d<<" = "<<a*b*c*d<<"\n\n========================\n"<<endl;
        }

        void sum()
        {
            cout<<"\n========================\n\n"<<"Enter the value for sum..."<<"\n\n========================\n"<<endl;
        }
};



int main()
{
    Task t;
    t.sum();
    t.sum(2,4);
    t.sum(4,5,5);
}