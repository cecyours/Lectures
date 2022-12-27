#include<iostream>
using namespace std;
int main()
{
    int num;
    bool is_prime=true;
    cout<<"Enter the number : ";
    cin>>num;

    int temp = num;

        int factor = 2;
    while(temp>1)
    {
        is_prime = true;

        for(int i=2;i<=factor/2;i++)
        {
            if(factor%i==0)
            {
                    is_prime = false;
                break;
            }
        }

        if(is_prime)
        {
            while(temp%factor==0)
            {
                temp = temp/factor;
                if(temp!=1)
                    cout<<factor<<" X ";
                else
                    cout<<factor<<" X 1.";
            }
        }

                factor++;
    }
}