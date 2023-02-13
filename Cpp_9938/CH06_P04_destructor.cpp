#include<iostream>
using namespace std;

class Task{

    public:
        Task()
        {
            cout<<"this is constructor..."<<this<<endl;
        }


        ~Task() //default destructor..
        {
            cout<<"Good byee.."<<this<<endl;
        }

};
int main()
{
    Task t1,t2,t3;
    char ch;

    cout<<"Enter key : ";
    cin>>ch;


}