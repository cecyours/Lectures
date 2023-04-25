#include<iostream>
#include<string>
using namespace std;
int main()
{
    string arr[6] = {"Vaibhav","Ankita","Avantika","Richa","Kamini","Hardi"};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    cout<<arr[5]<<endl;

    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;


    for (int i = 0; i < arr->size(); i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
    
}