#include<iostream>
using namespace std;

class Array{

    private:
     int array[10];

    public:

    void getArray()
    {
        for(int index = 0; index <= 4; index++)
        {
            cout<<"array [ " << index <<" ] : ";
            cin>>array[index];
        }
    }

    void putArray()
    {

        for(int index = 0; index <= 4; index++ )
        {
            cout << array [ index ] << " ";
        }
    }

    void sortAscending()
    {

        int index_1 , index_2 , temp ; 

        for( index_1 = 0 ; index_1 <= 4 ; index_1++ )
        {
            for( index_2 = 0 ; index_2 < 4 - index_1 ; index_2++ )
            {
                if( array [ index_2 ] > array [ index_2 + 1 ] )

                {
                    temp = array [ index_2 ];
                    array [ index_2 ] = array [ index_2 + 1 ];
                    array [ index_2 + 1 ] = temp;
                }
            }
        }
    }
};

int main()
{

    Array A;

    A.getArray();

    A.sortAscending();

    cout<<"\t\t ***Displaying*** \n ";
    cout<<" Sorted Array is  : ";

    A.putArray();

    return 0;
}