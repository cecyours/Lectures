#include<iostream>
#include "my_array.h"

using namespace std;
int main()
{
    int a[100];

    get_a(a);
 
    int max = find_max(a);

    cout<<"your max element is : "<<max;

}