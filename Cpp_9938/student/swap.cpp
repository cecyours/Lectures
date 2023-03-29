#include<iostream>
using namespace std;

class Task{

    private:
 int a,b;
    public:
       
       void setdata()
       {
            cout<<"Enter A and B : ";
            cin>>a>>b;

       }
       void swap()
       {
            int temp = a;
            a = b;
            b = temp;
       }      


        void getdata()
        {
            cout<<" a "<<a<<" b "<<b<<"\n"<<endl;
        }
};

int main()
{
    Task t;

    t.setdata();
    t.getdata();
    t.swap();
    t.getdata();

}