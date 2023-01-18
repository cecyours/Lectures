
#include<iostream>
using namespace std;
int main()
{
    int start,end,i,j;


        cout<<"Enter start end : ";
        cin>>start>>end;

        for(i=start;i<=end;i++)
        {
            cout<<"------"<<i<<"-------"<<endl;
            int n = i;
            for(j=1;j<=10;j++)
            {
                cout<<n<<" x "<<j<<" = "<<(n*j)<<endl;
            }
        }
    return 0;
}