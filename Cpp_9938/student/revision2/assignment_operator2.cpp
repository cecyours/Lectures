#include<iostream>
using namespace std;
int main()
{
    int var1,var2;
    cout<<"Enter var1 = ";
    cin>>var1;
    cout<<"Enter var2 = ";
    cin>>var2;

    cout<<"your var1 is = "<<var1<<endl;
    var1-=var2;
    cout<<"Your Ans : "<<var1<<endl<<endl;

    int var3,var4;
    cout<<"Enter var3 = ";
    cin>>var3;
    cout<<"Enter var4 = ";
    cin>>var4;

    var3+=var4;
    cout<<"Your Ans : "<<var3<<endl<<endl;

    int var5,var6;
    cout<<"Enter var5 : ";
    cin>>var5;
    cout<<"Enter var6 : ";
    cin>>var6;

    var5*=var6;
    cout<<"your Ans = "<<var5<<endl<<endl;

    int var7,var8;
    cout<<"Enter var7 = ";
    cin>>var7;
    cout<<"Enter var8 = ";
    cin>>var8;

    var7/=var8;
    cout<<"Your Ans = "<<var7<<endl<<endl;

    int var12,var13;
    cout<<"Enter var12 = ";
    cin>>var12;
    cout<<"Enter var13 = ";
    cin>>var13;

    var12%=var13;
    cout<<"Your Ans "<<var12<<endl;

}