
#include<iostream>
using namespace std;
int main()
{
    int rollNo;
    char div;


    cout<<"Enter your div rollNo : ";
    cin>>div>>rollNo;

    switch(div)
    {
        case 'A':
        case 'a':
            switch(rollNo)
            {
                case  1 ... 10: cout<<"Iron Man"<<endl;break;
                case 11 ... 30: cout<<"Captain America"<<endl;break;
                case 31 ... 50: cout<<"Endgame"<<endl;break;
                case 51 ... 60: cout<<"Age of ultron"<<endl;break;
                default:
                cout<<"Error..."; 
            }break;
  
        case 'B':
        case 'b':
            switch(rollNo)
            {
                case  1 ... 30: cout<<"SpiderMan Homeless"<<endl;break;
                 case 31 ... 45: cout<<"Loki the revenge"<<endl;break;
                case 46 ... 60: cout<<"Wolverine : logan"<<endl;break;
                default:
                cout<<"Error..."; 
            }break;

    }
}