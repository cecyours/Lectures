#include<iostream>
using namespace std;
class className
{
    public:
       string Name;
       string std;
       int roll;
       className(string var1, string var2, int num1)
        {
           Name = var1;
           std = var2;
           roll = num1;
        }
};
int main()
{
    // By making object ou are auto calling the constructer
    // and sending the value of parameter
    className obj1("Vaibhav","12th",23);
    className obj2("Avantika","12th",42);
 
    cout<<"Name= "<<obj1.Name<<" Standerd= "<<obj1.std<<" Roll num= "<<obj1.roll<<endl;
    cout<<"Name= "<<obj2.Name<<" Standerd= "<<obj2.std<<" Roll num= "<<obj2.roll<<endl;
    return 0;
}