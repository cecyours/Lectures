#include<iostream>
#include<string>
using namespace std;

class LogIn{

    private:
    string userName = "sharekasikar";
    string userPass = "bulletgai@ak47";


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

    cout<<"Enter the user name : ";
    cin>>myUserName;

    cout<<"Enter the user Pass : ";
    cin>>myUserPass;

    if(gate.toLogIn(myUserName,myUserPass))
    {
        cout<<"Login successfully..";
    }
    else
    {
        cout<<"incorrent username/password";
    }


    return 0;
}