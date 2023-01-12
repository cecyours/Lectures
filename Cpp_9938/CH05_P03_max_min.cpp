#include<iostream>
#include "my_array.h"
#include<stdlib.h>
using namespace std;
int main()
{
    int a[100];

    system("clear");
    get_a(a);

 
    int max = find_max(a);
    cout<<"\nyour max element is : "<<max;

    int min = find_min(a);
    cout<<"\nyour min element is : "<<min<<endl;

    display(a);
    cout<<"-------------"<<endl;
    reverse(a);
    display(a);


}