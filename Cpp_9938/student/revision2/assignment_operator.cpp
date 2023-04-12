#include<iostream>
using namespace std;
int main()
{
    int var1,var2;
    cout<<"Enter var1= ";
    cin>>var1;
    cout<<"Enter var2= ";
    cin>>var2;
    cout<<"your var1 is = "<<var1<<endl;

    var1-=var2;
    //var1=var1-var2
    cout<<"your ans= "<<var1;
    return 0;
}