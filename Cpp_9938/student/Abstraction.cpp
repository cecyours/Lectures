#include<iostream>
#include<string>

using namespace std;

class LogIn{

    private:
        string userName = "Alan";
        string userPass = "BloodMoon@123";

    public:
    LogIn()
    {

    }
    bool toLogIn(string userName,string userPass)
    {
                if(userName==this->userName && userPass==this->userPass)
                    return true;
                return false;
    }
};

int main()
{
    LogIn gate;
    string myUserName,myUserPass;

    cout<<"Enter the user name : ";         cin>>myUserName;
    cout<<"Enter Pass : ";                  cin>>myUserPass;

    if(gate.toLogIn(myUserName,myUserPass))   {cout<<"\t\t***Success*** ";}
    else  {cout<<"\t\t***incorrent*** ";}
    return 0;


}