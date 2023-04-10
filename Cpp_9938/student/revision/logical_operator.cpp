#include"iostream"
using namespace std;
int main()
{
    int x;
    int y;
    cout<<"Enter the value of x= "<<endl;
    cin>>x;
    cout<<"Enter the value of y= "<<endl;
    cin>>y;
    if(x == y || x < y)
    {
        cout<<"same";
    }
    else
    {
        cout<<"not same";
    }

}