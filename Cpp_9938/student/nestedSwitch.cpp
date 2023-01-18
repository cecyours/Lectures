#include<iostream>
using namespace std;

int main()
{

    int RollNo;
    char Div;


    cout<<"Enter your Div RollNo : ";
    cin>>Div>>RollNo;

    switch (Div)
    {
        case 'A':
        case 'a':
            switch(RollNo)
            {
                case  1 ... 10: cout<<"Iron Man"<<endl;break;
                case 11 ... 30: cout<<"Captain America"<<endl;break;
                case 31 ... 60: cout<<"Endgame"<<endl;break;
                case 61 ... 80: cout<<"Age of Ultron"<<endl;break;
                default:
                cout<<"Error...";

            }
            break;

        case 'B':
        case 'b':
            switch(RollNo)
            {
                case  1 ... 20: cout<<"Super Man"<<endl;break;
                case 21 ... 50: cout<<"Thor"<<endl;break;
                case 51 ... 80: cout<<"Hulk"<<endl;break;
                default:
                cout<<"Error...";

            }
            break;
    }
}