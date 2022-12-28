
#include<iostream>
using namespace std;
int main()
{

    int  i = 109;
    float f;

    /**
     * implicit : type cast
     * 
     * small -> large
     * 
     * No data loss
     * 
    */
    f = i; //float <- int

    cout<<"  int : "<<i<<endl;
    cout<<"float : "<<f<<endl;

    /**
     * explicit : type cast
     * 
     * large -> small
     * 
     * data lose.
    */

   f = 34.54;

    i = f; // int <- float
    cout<<"  int : "<<i<<endl;
    cout<<"float : "<<f<<endl;





    return 0;
}