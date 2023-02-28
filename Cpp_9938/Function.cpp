#include<iostream>
using namespace std;

class Task{


    private:
        int a,b,c;

    public:
        Task (int a,int b, int c)
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

        int min()
        {
            if(a<b)
            {
                return (a<c)?a:c;
            }
            else{
                return (b<c)?b:c;
            }
        }

        
};

int main()
{

    int x,y,z;

    cout<<"Enter 3 numbers : ";
    cin>>x>>y>>z;

    Task t1(x,y,z);

    int max = t1.max();

    cout<<"\n    ============================================================\n";
    cout<<"  =                                                             =\n";
    cout<<" =                                                               =\n";
    cout<<"=                                                                 =";

    cout<<"\n\t\t\t*** MAX : "<<max<<" ***"<<endl;

    cout<<"=                                                                 =\n";
    cout<<" =                                                               =\n";
    cout<<"  =                                                             =\n";
    cout<<"    ===========================================================\n";


 

    int X,Y,Z;

    cout<<"Enter 3 numbers : ";
    cin>>X>>Y>>Z;

    Task t2(X,Y,Z);

    int min = t2.min();

    cout<<"\n\n============================================================\n\n";

    cout<<"\n\t\t*** MIN : "<<min<<" ***"<<endl;

    cout<<"\n\n============================================================\n\n";

}