
#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,rem=0;

    cout<<"Enter the number : ";
    cin>>num;

    while(num>0)
    {
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }

    cout<<"reverse number : "<<rev;
    return 0;
}