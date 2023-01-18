#include<iostream>
#include<stdlib.h>
#include"array.h"

using namespace std;
int main()
{

    system("clear");
    int a[100];

    get_a(a);

    int max = find_max(a);

    cout<<"\t***** Max Element : "<<max<<" *****";


    int min = find_min(a);
    cout<<"\t***** Min Element : "<<min<<" *****"<<endl;


    display(a);
    cout<<"---------------"<<endl;
    reverse(a);
    display(a);

}