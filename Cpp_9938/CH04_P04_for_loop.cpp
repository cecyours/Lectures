
#include<iostream>
using namespace std;
int main()
{
    int start,end,step,i;

    cout<<"Enter start-end-step ";
    cin>>start>>end>>step;


    int counter=0;
    for(i=start;i<=end;i+=step)
    {
        for(int j=0;j<counter;j++)
            cout<<"|_";

        cout<<i<<endl;
        
        if(counter%50==0)
            counter=0;
        counter++;
    }

    return 0;
}