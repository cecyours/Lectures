#include<iostream>
using namespace std;

class Task
{
    public:
        Task()
        {
            cout<<"\t\t\nHello world...."<<this<<endl;
        }

        ~Task()
        {
            cout<<"\t\t\nGood byeee.."<<this<<endl;
        }
};
int main()
{
    Task t1,t2,t3;

}