#include<iostream>
using namespace std;

class Task{

    private:
         int a,b,c;   


    public:

    Task(int a,int b,int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    int max()
    {

        if(a>b)
            {
               return (a>c)?a:c;
            }
        else{
            return (b>c)?b:c;
        }
    }

};

int main()
{
    int x,y,z;

    cout<<"Enter  3 numbers : ";
    cin>>x>>y>>z;

    Task t(x,y,z);

    int max = t.max();

    cout<<"max : "<<max<<endl;

}